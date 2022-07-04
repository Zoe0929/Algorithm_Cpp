public class pro77484 {
}
class Solution {
    public String solution(int[] numbers, String hand) {
        String answer = "";
        int lefthand=11;
        int righthand=12;
        for(int i=0;i<numbers.length;i++){
            if(numbers[i]==1||numbers[i]==4||numbers[i]==7){
                answer+="L";
                lefthand=numbers[i];
            }
            else if(numbers[i]==3||numbers[i]==6||numbers[i]==9){
                answer+="R";
                righthand=numbers[i];
            }
            else{
                if(numbers[i]==0) numbers[i] += 11;
                int L_dis = (Math.abs(numbers[i]-lefthand))/3 + (Math.abs(numbers[i]-lefthand))%3;
                int R_dis = (Math.abs(righthand-numbers[i]))/3 + (Math.abs(righthand-numbers[i]))%3;
                if(L_dis == R_dis) {
                    if(hand.equals("right")) {
                        answer+="R";
                        righthand = numbers[i];
                    }else {
                        answer+="L";
                        lefthand = numbers[i];
                    }
                }else if(L_dis > R_dis) {
                    answer+="R";
                    righthand = numbers[i];
                }else {
                    answer+="L";
                    lefthand = numbers[i];
                }
            }
        }
        return answer;
    }

}