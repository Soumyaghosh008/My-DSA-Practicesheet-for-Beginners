import java.util.Scanner;

public class q10 {

    public static void callCopy(int arr[], int temp[], int ln) {

        for (int i = 0; i < ln; i++) {

            temp[i] = arr[i];
        }

        System.out.println("The Copied Array is: ");

        for (int i = 0; i < ln; i++) {
            System.out.print(temp[i] + " ");
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Array Length: ");
        int ln = sc.nextInt();

        int arr[] = new int[ln];
        int temp[] = new int[ln];

        for (int i = 0; i < args.length; i++) {

            arr[i] = sc.nextInt();
        }

        callCopy(arr, temp, ln);

        sc.close();
    }
}
