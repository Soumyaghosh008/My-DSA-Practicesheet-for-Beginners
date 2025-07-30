import java.util.Scanner;

public class q7 {

    public static int getMin(int arr[], int size) {

        int min = arr[0];

        for (int i = 0; i < size; i++) {

            if (arr[i] < min) {

                min = arr[i];
            }
        }

        return min;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Array Length: ");
        int ln = sc.nextInt();

        int x[] = new int[ln];

        int result = getMin(x, ln);

        System.out.println("The Max Element is: " + result);

        sc.close();
    }
}
