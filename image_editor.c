#include <stdio.h>
#include <stdlib.h>

void remove_red();
void convert_to_black_and_white();
void instagram_square();

int main(int argc, char *argv[])
{

    if((!(argv[1][0]=='1'||argv[1][0]=='2'||argv[1][0]=='3'))&&argc==2){

        printf("Error: Expecting one command-line argument, which needs to be either 1, 2, or 3.");
        return 0;
    }

    if(argv[1][0]=='1'){
        remove_red();
    }else if(argv[1][0]=='2'){

        convert_to_black_and_white();

    }else{

        instagram_square();

    }



  return 0;
}
