#include <bits/stdc++.h> // Inclui todas as bibliotecas necess�rias
using namespace std;

typedef long long int64; // Define "int64" como um alias para "long long", �til para grandes inteiros

vector<list<int>> graph(110000); // Lista de adjac�ncia para representar o grafo
int visited[110000]; // Array para marcar os v�rtices visitados
int v = 1; // Vari�vel usada para identificar rodadas de DFS
int V, E, counter = 0; // V = n�mero de v�rtices, E = n�mero de arestas, counter = contador de v�rtices visitados

// Fun��o que realiza a DFS (Busca em Profundidade) e imprime o caminho
void RunDFS(int u, int blank) {
    visited[u] = v; // Marca o v�rtice 'u' como visitado na rodada 'v'
    counter++; // Incrementa o contador de v�rtices visitados
    list<int>::iterator it; // Iterador para percorrer a lista de adjac�ncia do v�rtice 'u'

    // Para cada vizinho do v�rtice 'u'
    for (it = graph[u].begin(); it != graph[u].end(); it++) {
        // Se o vizinho '*it' ainda n�o foi visitado
        if (visited[*it] != v) {
            visited[*it] = v; // Marca o vizinho como visitado
            
            // Imprime o n�mero de espa�os para representar a hierarquia
            for (int i = 0; i < blank; i++) {
                printf(" ");
            }
            
            // Imprime a aresta e a chamada recursiva da DFS
            printf("%d-%d pathR(G,%d)\n", u, *it, *it);
            
            // Chama a DFS recursivamente para o vizinho, aumentando a indenta��o
            RunDFS(*it, blank + 2);
        } else {
            // Se o vizinho j� foi visitado, imprime apenas a aresta
            for (int i = 0; i < blank; i++) {
                printf(" ");
            }
            printf("%d-%d\n", u, *it);
        }
    }
}

int main() {
    int a, b, t; // Vari�veis para armazenar as entradas: 'a' e 'b' s�o v�rtices das arestas, 't' � o n�mero de casos de teste
    scanf("%d", &t); // L� o n�mero de casos de teste

    // Para cada caso de teste
    for (int i = 0; i < t; i++) {
        if (i > 0)
            printf("\n"); // Imprime uma linha em branco entre os casos de teste
        counter = 0; // Reseta o contador de v�rtices visitados
        
        scanf("%d %d", &V, &E); // L� o n�mero de v�rtices (V) e arestas (E)
        printf("Caso %d:\n", i + 1); // Imprime o n�mero do caso
        
        // Limpa a lista de adjac�ncias para o pr�ximo caso de teste
        for (int j = 0; j < V; j++) {
            graph[j].clear();
        }

        // L� as arestas do grafo e adiciona � lista de adjac�ncia
        for (int j = 0; j < E; j++) {
            scanf("%d %d", &a, &b); // L� os v�rtices da aresta
            graph[a].push_back(b); // Adiciona a aresta ao grafo (direcionado)
        }

        // Ordena as listas de adjac�ncia para garantir a ordem lexicogr�fica
        for (int j = 0; j < V; j++) {
            graph[j].sort();
        }

        // Realiza a DFS a partir de cada v�rtice n�o visitado
        for (int j = 0; j < V; j++) {
            if (visited[j] == v) // Se o v�rtice j� foi visitado, pula para o pr�ximo
                continue;
            else {
                RunDFS(j, 2); // Chama a DFS come�ando pelo v�rtice 'j'
                
                // Imprime uma linha em branco se houver componentes n�o visitados
                if (graph[j].size() && counter != V)
                    printf("\n");
            }
        }

        v++; // Incrementa 'v' para uma nova rodada de DFS
    }

    return 0;
}
