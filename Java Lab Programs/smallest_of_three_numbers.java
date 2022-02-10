public class smallest_of_three_numbers {
    public static void main(String[] args) {
        int a = 32, b = 45, c = 23;
        if (a <= b) {
            if (a <= c)
                System.out.println("The Smallest number is " + a);
            else
                System.out.println("The Smallest number is " + c);
        } else {
            if (b <= c)
                System.out.println("The Smallest number is " + b);
            else
                System.out.println("The Smallest number is " + c);
        }
    }
}
