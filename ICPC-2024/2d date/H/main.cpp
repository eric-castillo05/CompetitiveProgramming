#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<b;i++)

using namespace std;
typedef long long int lli;

struct Node {
    int val;
    Node* next;
    Node* prev; // Añadimos un puntero prev para movernos hacia atrás en la lista
    Node(int value) : val(value), next(nullptr), prev(nullptr) {}
};

Node* generateList(int n) {
    if (n <= 0) return nullptr;
    Node* head = new Node(1);
    Node* current = head;
    Node* prev = nullptr;
    REP(i, 2, n + 1) {
        Node* newNode = new Node(i);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }
    current->next = head; // Hacer la lista circular
    head->prev = current; // Completar el enlace circular
    return head;
}

void moveClockwise(Node*& node, int steps) {
    while (steps--) {
        node = node->next;
    }
}

void moveCounterClockwise(Node*& node, int steps) {
    while (steps--) {
        node = node->prev;
    }
}

void _solve() {
    lli n, r, c;
    cin >> n >> r >> c;
    Node* head = generateList(n);
    vector<int> hire;

    if (!head) return;

    Node* s1 = head;
    Node* s2 = head->prev; // El nodo antes de head

    int count = n;
    while (count > 1) { // Mientras haya más de 1 nodo
        moveClockwise(s1, r);
        moveCounterClockwise(s2, c);

        if (s1 == s2) {
            hire.push_back(s1->val);
            s1->prev->next = s1->next;
            s1->next->prev = s1->prev;
            Node* temp = s1->next;
            delete s1;
            s1 = temp;
            s2 = s1->prev;
            count--;
        } else {
            Node* temp1 = s1->next;
            Node* temp2 = s2->prev;

            s1->prev->next = s1->next;
            s1->next->prev = s1->prev;
            s2->prev->next = s2->next;
            s2->next->prev = s2->prev;

            delete s1;
            delete s2;

            s1 = temp1;
            s2 = temp2;
            count -= 2;
        }
    }

    // Imprimir el vector hire
    for (int x : hire) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    _solve();
    return 0;
}
