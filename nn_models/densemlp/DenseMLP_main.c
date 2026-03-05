#include <stdio.h>
#include "DenseMLP.simplified.c"
int main(void){ 
    float input[1][1][10] = {{{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}}};
	float hidden_state[1][4] = {{1.0,1.0,1.0,1.0}};
    float output[1][4];float hidden_state_upd[1][1][4];
    entry(input,hidden_state,output,hidden_state_upd);
    for (int i = 0; i<1;i++){ 
	    for (int j = 0; j<4;j++){
printf("%f ",output[i][j]);
}	
}	

    
}
