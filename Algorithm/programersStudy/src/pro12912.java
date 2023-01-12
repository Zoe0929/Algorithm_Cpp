import java.util.Scanner;

public class pro12912 {
    public static void main(String[] args) {

    }
}

class Soultion {
    public long solution(int a, int b) {
        long answer = 0;
        if(a<b){
            for(int i=a;i<=b;i++){
                answer+=i;
            }
        }
        else{
            for(int i=b;i<=a;i++){
                answer+=i;
            }
        }
        return answer;
    }
}
