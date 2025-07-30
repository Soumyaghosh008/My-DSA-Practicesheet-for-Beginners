import java.util.Scanner;

public class q6 {

    public static int getMax(int arr[], int size) {

        int max = arr[0];

        for (int i = 0; i < size; i++) {

            if (arr[i] > max) {

                max = arr[i];
            }
        }

        return max;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Array Length: ");
        int ln = sc.nextInt();

        int x[] = new int[ln];

        int result = getMax(x, ln);

        System.out.println("The Max Element is: " + result);

        sc.close();
    }
}
