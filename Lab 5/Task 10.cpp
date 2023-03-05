
using namespace std;
int main() { 

	/* ...TASK NO 10 PART A...
	for(int i = 0; i < 20; i++){
            if(i % 2 == 0){
           cout<<(i*2);
		                }  
	}  output is 0 4 8 12 16 20 24 28 32 36 */
	
	 
	/* ....Task NO PART B...
     for(int i = 20; i > 0 ; i-- ){
         if(i % 2 == 0){
	      cout<<i;
            }   }   
		   output is 20 18 16 14 12 10 8 6 4 2 */  

        /*... TASK NO PART C...
        int mysteryInt = 100;
	for(int i = 5; i > 0;i-- ){
	mysteryInt -= i;
	cout<<(mysteryInt); 
      }     output is 95 91 88 86 85 */ 
	
	/*... TASK NO PART D ...
	for(int i = 5; i > 0;i-- ){
	int mysteryInt = 100;
	mysteryInt -= i;
      cout<<(mysteryInt);
      } output is 95 96 97 98 99 */ 
      
      /* ... TASK NO PART E ...*/
      int mysteryInt = 1;
      int counter=1;
      while(mysteryInt <  3 ) {
		mysteryInt = mysteryInt* counter;
		counter++;
		}
      cout<<(mysteryInt);

 }
