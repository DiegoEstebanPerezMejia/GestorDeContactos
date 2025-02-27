void buscarContacto() {
    char nombreBusqueda[50];
    printf("Ingrese el nombre a buscar: ");
    fgets(nombreBusqueda, 50, stdin);
    nombreBusqueda[strcspn(nombreBusqueda, "\n")] = 0;

    for (int i = 0; i < totalContactos; i++) {
        if (strcmp(contactos[i].nombre, nombreBusqueda) == 0) {
            printf("Contacto encontrado: %s - %s - %s\n", contactos[i].nombre, contactos[i].telefono, contactos[i].correo);
            return;
        }
    }

    printf("Contacto no encontrado.\n");
}
