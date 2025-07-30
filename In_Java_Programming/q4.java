import java.util.Scanner;

public class q4 {

    public static int getAvg(int arr[], int size) {

        int avg = 0, sum = 0;

        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }

        avg = sum / size;

        return avg;
    }

    public static int getSum(int arr[], int size) {

        int sum = 0;

        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Array Length: ");
        int ln = sc.nextInt();

        int x[] = new int[ln];

        int result = getSum(x, ln);
        int result2 = getAvg(x, ln);

        System.out.println("The Sumation is: " + result);
        System.out.println("The Average is: " + result2);

        sc.close();
    }
}
