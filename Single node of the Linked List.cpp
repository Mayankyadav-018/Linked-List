/* NAME - Mayank Yadav
   PRN - 24070123060
   CLASS - ENTC - A3 */
   
#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    
    Node(int data){
        val = data;
        next = NULL;
    }
};
int main(){
    Node* n = new Node(20);
    cout << n->val << " " << n->next << endl;
    return 0;
}



/* OUTPUT 
20 0
*/
