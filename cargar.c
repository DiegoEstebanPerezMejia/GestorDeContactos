void cargarContactos() {
    FILE *archivo = fopen("contactos.txt", "r");
    if (!archivo) {
        printf("No se encontró un archivo de contactos.\n");
        return;
    }

    totalContactos = 0;  // Reiniciar la lista antes de cargar
    while (fscanf(archivo, "%[^\n] ; %[^\n] ; %[^\n]\n", contactos[totalContactos].nombre, contactos[totalContactos].telefono, contactos[totalContactos].correo) != EOF) {
        totalContactos++;
        if (totalContactos >= 100) break;
    }

    fclose(archivo);
    printf("Contactos cargados correctamente.\n");
}
