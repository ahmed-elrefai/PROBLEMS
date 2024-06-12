import java.util.Scanner;
import java.util.Stack;

/**
 * this is problem1 in java
 */
public class Problem1 {

    public static Stack<Integer> decToBin(int decimal){
        Stack<Integer> bin = new Stack<>();
        while (decimal != 0){
            int remain = decimal % 2;
            decimal /= 2;
            bin.push(remain);
        }

        return bin;
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter your decimal number: ");
        int decimal = scan.nextInt();
        Stack<Integer> binary = decToBin(decimal);
        while (!binary.isEmpty()){
            System.out.print(binary.pop() + " ");
        }
        scan.close();
    }
}