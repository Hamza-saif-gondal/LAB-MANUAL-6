//task 1
//#include<iostream>
//using namespace std;
//int main(){
//    int c=0 , i, j;
//    for( i=2; i<=50; i++){
//        for( j=2; j<i; j++){
//            if( i%j==0 ) 
//		    break;
//			}
//            
//			if( j==i )
//            c=c+j;
//	}
//        cout<<"Sum of prime numbers between 1 and 50 : "<< c <<endl;
//    
//return 0;	
//}
//TASK 2
//#include<iostream>
//using namespace std;
//int main(){
//    for(int i=1;i<=5;i++){
//        for(int j=1;j<=i;j++){
//        cout<<j<<" "; 
//		}
//    cout<<endl;
//	} 
//}
//Task 3
#include<iostream> 
using namespace std;
int main(){

    int row =1;
    cout<<"1"<<endl;

    for(int i=1;i<=6;i++){
        if(i%2==0){
            for(int j=1;j<=i;j++){ 
		    cout<<i<<" ";
            }
        }
    cout<<endl;
    }
}

