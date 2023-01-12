import java.util.HashSet;
import java.util.Set;

public class programers68644 {
    public static void main(String[] args) {

    }
}
class Solution {
    static public int[] solution(int[] numbers) {
        int[] answer = {};
        Set<Integer> set= new HashSet<>();
        for(int i=0;i<numbers.length;i++){
            for(int j=i+1;j< numbers.length;j++){
                set.add(numbers[i]+numbers[j]);
            }
        }
        return set.stream().sorted().mapToInt(Integer::intValue).toArray();
    }
}