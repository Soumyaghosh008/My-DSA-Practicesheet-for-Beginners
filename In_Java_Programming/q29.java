import java.util.Scanner;

public class q29 {

    public static int get_Iterative(int arr[], int ln, int key) {

        int low = 0, high = ln - 1;

        while (low <= high) {

            int mid = high + (high - low) / 2;

            if (arr[mid] > key) {
                high = mid - 1;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                return mid;
            }
        }

        return -1;
    }

    public static int Recursivesearch(int arr[], int ln, int key, int startP, int endP) {

        if (startP <= endP) {
            int mid = startP + (endP - startP) / 2;

            if (key > arr[mid]) {
                return Recursivesearch(arr, ln, key, mid + 1, endP);
            } else if (key < arr[mid]) {
                return Recursivesearch(arr, ln, key, startP, mid - 1);
            } else {
                return mid;
            }
        }

        return -1;
    }

    public static void get_Element(int arr[], int ln, Scanner sc) {

        System.out.println("Enter The Array Elements: ");

        for (int i = 0; i < ln; i++) {

            arr[i] = sc.nextInt();
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Array Length: ");
        int ln = sc.nextInt();

        System.out.println("Enter The Key Element: ");
        int key = sc.nextInt();

        int arr[] = new int[ln];

        int low = 0, high = ln - 1;

        get_Element(arr, ln, sc);
        int ans1 = get_Iterative(arr, ln, key);
        int ans2 = get_Recursive(arr, ln, key);

        if (ans1 != -1 && ans2 != -1) {
            System.out.println("Value not Found!");
        } else {
            System.out.println("Value found on " + ans1 + " position in Iterative Approach.");
            System.out.println("Value found on " + ans2 + " position in Recursive Approach.");
        }
        sc.close();
    }
}