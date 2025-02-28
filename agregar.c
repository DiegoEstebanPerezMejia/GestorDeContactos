void agregarContacto() {
    if (totalContactos >= 100) {
        printf("No se pueden agregar más contactos.\n");
        return;
    }

    printf("Nombre: ");
    fgets(contactos[totalContactos].nombre, 50, stdin);
    contactos[totalContactos].nombre[strcspn(contactos[totalContactos].nombre, "\n")] = 0;

    printf("Telefono: ");
    fgets(contactos[totalContactos].telefono, 15, stdin);
    contactos[totalContactos].telefono[strcspn(contactos[totalContactos].telefono, "\n")] = 0;

    printf("Correo: ");
    fgets(contactos[totalContactos].correo, 50, stdin);
    contactos[totalContactos].correo[strcspn(contactos[totalContactos].correo, "\n")] = 0;

    totalContactos++;
    printf("Contacto agregado correctamente.\n");
}
