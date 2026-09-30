import java.util.Scanner;

public class Main {

    static String removeDuplicates(String s) {
        boolean[] seen = new boolean[256];
        StringBuilder result = new StringBuilder();

        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);

            if (!seen[ch]) {
                result.append(ch);
                seen[ch] = true;
            }
        }

        return result.toString();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String s = sc.nextLine();

        System.out.println("After removing duplicates: "
                + removeDuplicates(s));

        sc.close();
    }
}

Output1:
Enter a string: programming
After removing duplicates: progamin

Output2:
Enter a string: banana
After removing duplicates: ban
