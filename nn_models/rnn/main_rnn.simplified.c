#include <stdio.h>
#include "rnn.simplified.c"
int main(void){ 
    float input[1][1][14] = {{{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}}};
	float hidden_state[1][1][16] = {{{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}}};
	float cell_state[1][1][16] = {{{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}}};
    float output[1][4];
    entry(input,hidden_state,cell_state,output);
    for (int i = 0; i<1;i++){ 
	    for (int j = 0; j<4;j++){
printf("%f ",output[i][j]);
}	
}	

    
}
