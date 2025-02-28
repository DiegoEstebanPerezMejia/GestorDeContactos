void mostrarContactos() {
    if (totalContactos == 0) {
        printf("No hay contactos para mostrar.\n");
        return;
    }

    printf("\nLista de contactos:\n");
    for (int i = 0; i < totalContactos; i++) {
        printf("%d. %s - %s - %s\n", i + 1, contactos[i].nombre, contactos[i].telefono, contactos[i].correo);
    }
}
