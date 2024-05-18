#include <iostream>

using namespace std;

void towerOfHanoi(int plate, char src, char aux, char dest){

    if( plate == 1){
        cout<<"Move disk "<<plate<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    towerOfHanoi(plate -1,src,dest,aux);
    cout<<"Move disk "<<plate<<" from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(plate-1, aux, src, dest);

}

int main(){

    towerOfHanoi(5,'S','A','D');

    return 0;
}
