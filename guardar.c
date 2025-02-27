void guardarContactos() {
    FILE *archivo = fopen("contactos.txt", "w");
    if (!archivo) {
        printf("Error al guardar los contactos.\n");
        return;
    }

    for (int i = 0; i < totalContactos; i++) {
        fprintf(archivo, "%s - %s - %s\n", contactos[i].nombre, contactos[i].telefono, contactos[i].correo);
    }

    fclose(archivo);
}
