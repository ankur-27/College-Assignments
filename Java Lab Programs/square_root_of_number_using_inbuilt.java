import java.util.Scanner;

public class square_root_of_number_using_inbuilt {
    public static void main(String[] args) {
        System.out.print("Enter any Number : ");
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        System.out.println("The Square Root of the given Number is " + Math.sqrt(n));
        s.close();
    }
}
