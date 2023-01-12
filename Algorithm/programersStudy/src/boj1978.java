import java.util.Scanner;

public class boj1978 {
    public static void main(String[] args) {
        int N=0;
        int answer=0;
        Scanner scanner=new Scanner(System.in);
        N=scanner.nextInt();
        for(int i=0;i<N;i++){
            boolean isPrime=true;
            int num=scanner.nextInt();
            if(num==1){
                continue;
            }
            for(int j=2;j<=Math.sqrt(num);j++){
                if(num%j==0){
                    isPrime=false;
                    break;
                }
            }
            if(isPrime) answer++;
        }
        System.out.println(answer);
    }
}


