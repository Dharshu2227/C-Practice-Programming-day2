import java.util.Scanner;

public class Main {

    static char firstNonRepeating(String s) {
        int[] frequency = new int[256];

        // Count frequency of each character
        for (int i = 0; i < s.length(); i++) {
            frequency[s.charAt(i)]++;
        }

        // Find first character with frequency 1
        for (int i = 0; i < s.length(); i++) {
            if (frequency[s.charAt(i)] == 1) {
                return s.charAt(i);
            }
        }

        return '\0';
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String s = sc.nextLine();

        char result = firstNonRepeating(s);

        if (result == '\0') {
            System.out.println("First Non-Repeating Character: -1");
        } else {
            System.out.println("First Non-Repeating Character: " + result);
        }

        sc.close();
    }
}

Output 1:
Enter a string: swiss
First Non-Repeating Character: w

Output2:
Enter a string: aabbcc
First Non-Repeating Character: -1
