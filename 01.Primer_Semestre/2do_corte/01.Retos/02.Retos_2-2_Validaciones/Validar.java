import java.util.Scanner;

public class Validar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String entrada;
        int numero;

        while (true) {
            System.out.print("Ingrese un número entero: ");
            entrada = sc.nextLine();

            if (entrada.matches("[0-9]+")) {
                numero = Integer.parseInt(entrada);
                break;
            } else {
                System.out.println("Error: solo se permiten números enteros.");
            }
        }

        System.out.println("Número ingresado correctamente: " + numero);
        sc.close();
    }
}