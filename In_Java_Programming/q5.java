import java.util.Scanner;

public class q5 {

    public static int countEvenandOdd(int arr[], int size) {

        int even = 0, odd = 0;

        for (int i = 0; i < size; i++) {

            if (arr[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

        System.out.println("The Count of Even Numbers is: " + even);
        System.out.println("The Count of Odd Numbers is: " + odd);

        return 0;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Array Length: ");
        int ln = sc.nextInt();

        int x[] = new int[ln];

        countEvenandOdd(x, ln);

        sc.close();
    }
}
