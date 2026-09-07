class Cuenta {
public:
    void depositar(double cantidad); // Declarada pero nunca definida
};

int main() {
    Cuenta miCuenta;
    miCuenta.depositar(100.50); // El compilador la acepta, el linker falla
    return 0;
}