#include <bits/stdc++.h> // Inclui todas as bibliotecas necessárias
using namespace std;

typedef long long int64; // Define "int64" como um alias para "long long", útil para grandes inteiros

vector<list<int>> graph(110000); // Lista de adjacência para representar o grafo
int visited[110000]; // Array para marcar os vértices visitados
int v = 1; // Variável usada para identificar rodadas de DFS
int V, E, counter = 0; // V = número de vértices, E = número de arestas, counter = contador de vértices visitados

// Função que realiza a DFS (Busca em Profundidade) e imprime o caminho
void RunDFS(int u, int blank) {
    visited[u] = v; // Marca o vértice 'u' como visitado na rodada 'v'
    counter++; // Incrementa o contador de vértices visitados
    list<int>::iterator it; // Iterador para percorrer a lista de adjacência do vértice 'u'

    // Para cada vizinho do vértice 'u'
    for (it = graph[u].begin(); it != graph[u].end(); it++) {
        // Se o vizinho '*it' ainda não foi visitado
        if (visited[*it] != v) {
            visited[*it] = v; // Marca o vizinho como visitado
            
            // Imprime o número de espaços para representar a hierarquia
            for (int i = 0; i < blank; i++) {
                printf(" ");
            }
            
            // Imprime a aresta e a chamada recursiva da DFS
            printf("%d-%d pathR(G,%d)\n", u, *it, *it);
            
            // Chama a DFS recursivamente para o vizinho, aumentando a indentação
            RunDFS(*it, blank + 2);
        } else {
            // Se o vizinho já foi visitado, imprime apenas a aresta
            for (int i = 0; i < blank; i++) {
                printf(" ");
            }
            printf("%d-%d\n", u, *it);
        }
    }
}

int main() {
    int a, b, t; // Variáveis para armazenar as entradas: 'a' e 'b' são vértices das arestas, 't' é o número de casos de teste
    scanf("%d", &t); // Lê o número de casos de teste

    // Para cada caso de teste
    for (int i = 0; i < t; i++) {
        if (i > 0)
            printf("\n"); // Imprime uma linha em branco entre os casos de teste
        counter = 0; // Reseta o contador de vértices visitados
        
        scanf("%d %d", &V, &E); // Lê o número de vértices (V) e arestas (E)
        printf("Caso %d:\n", i + 1); // Imprime o número do caso
        
        // Limpa a lista de adjacências para o próximo caso de teste
        for (int j = 0; j < V; j++) {
            graph[j].clear();
        }

        // Lê as arestas do grafo e adiciona à lista de adjacência
        for (int j = 0; j < E; j++) {
            scanf("%d %d", &a, &b); // Lê os vértices da aresta
            graph[a].push_back(b); // Adiciona a aresta ao grafo (direcionado)
        }

        // Ordena as listas de adjacência para garantir a ordem lexicográfica
        for (int j = 0; j < V; j++) {
            graph[j].sort();
        }

        // Realiza a DFS a partir de cada vértice não visitado
        for (int j = 0; j < V; j++) {
            if (visited[j] == v) // Se o vértice já foi visitado, pula para o próximo
                continue;
            else {
                RunDFS(j, 2); // Chama a DFS começando pelo vértice 'j'
                
                // Imprime uma linha em branco se houver componentes não visitados
                if (graph[j].size() && counter != V)
                    printf("\n");
            }
        }

        v++; // Incrementa 'v' para uma nova rodada de DFS
    }

    return 0;
}
