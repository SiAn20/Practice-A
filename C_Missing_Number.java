import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class C_Missing_Number {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));  //lectura rapida
        BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));//escritura rápida

        int n = Integer.parseInt(reader.readLine());
        String[] x = reader.readLine().split(" ");
        reader.close();

        boolean[] present = new boolean[n + 1];

        for (String e : x) {
            present[Integer.parseInt(e)] = true;
        }

        for (int i = 1; i <= n; i++) {
            if (!present[i]) {
                writer.write(String.valueOf(i));
                writer.newLine();
                break;
            }
        }
        writer.flush(); //imprime en consola
    }
}
