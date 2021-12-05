#include<iostream>
#include<vector>
#include<stdlib.h>


int main(){
    //이차원배열로 [[string(문자열)],[숫자]];
    vector<vector<int>> list;
    while(1){
        char input;
        scanf("%c",&input);
        if(input=='i'){
            string add_list;
            scanf("%s",add_list);
            list.push_back([abb_list,1]);
        }
        else if(input=='d'){
            string remove_list;
            scanf("%s",remove_list);
            if(list.find(remove_list)) {
                //찾은 곳의 개수부분 -1;
                if(remove_list의 개수 부분 ==0) //remove_list행 삭제
            else printf("no such item \n");
        }
        else if(input=='u'){
            string update;
            scanf("%s", update);
            if(/*리스트에 있다면*/) {
                int num;
                scanf("%d",&num);
                /*update품목의 개수에 num대입*/
            }
            else{
                printf("no such item \n");
            }
        }
        else if(input=='p'){
            for(int i=0;i<list.length();i++){
                printf("%s(%d) ", list[i][0], list[0][i]);
            }
        }
        else if(input=='a'){
            /*숫자 부분 대소비교 후 min_name,num, max_name,num 저장*/
            printf("min: %s(%d), ", min_name, min_num);
            printf("max: %s(%d)" max_name,max_num);
        }
        else if(input=='q') break;
    }
       

}