import java.util.Scanner;

public class boj10844 {
    static int N;
    static Long[][] dp;
    final static int MOD=1000000000;

    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        N=scanner.nextInt();
        dp=new Long[N+1][10];
        for(int i = 1 ;i<10 ;i++){
            dp[1][i]=1L;
        }
        long result=0;
       for(int i = 1; i <= 9; i++) {
            result += recur(N, i);
        }
        System.out.println(result % MOD);


    }

    static long recur(int digit, int val) {

        // 첫째 자리수에 도착한다면 더이상 탐색할 필요 없음
        if(digit == 1) {
            return dp[digit][val];
        }

        // 해당 자리수의 val값에 대해 탐색하지 않았을 경우
        if(dp[digit][val] == null) {
            // val이 0일경우 다음은 1밖에 못옴
            if(val == 0) {
                dp[digit][val] = recur(digit - 1 ,1);
            }
            // val이 1일경우 다음은 8밖에 못옴
            else if(val== 9) {
                dp[digit][val] = recur(digit - 1, 8);
            }
            // 그 외의 경우는 val-1과 val+1 값의 경우의 수를 합한 경우의 수가 됨
            else {
                dp[digit][val] = recur(digit - 1, val - 1) + recur(digit - 1, val + 1);
            }
        }
        return dp[digit][val] % MOD;
    }
}