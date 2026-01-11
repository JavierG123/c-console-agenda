# Agenda de Contactos en C (Consola – Windows 11)

Este proyecto es una **agenda de contactos en modo consola**, escrita en lenguaje **C**, originalmente desarrollada para **Borland** y posteriormente **portada para funcionar en Windows 11 usando Visual Studio Code**.

El objetivo del proyecto es **conservar el comportamiento original** del programa (menú, interacción por teclado, limpieza de pantalla y posicionamiento del cursor), adaptando únicamente la implementación técnica para que sea compatible con entornos modernos.

---

## 🧩 Funcionalidades

- Menú interactivo en consola
- Entrada de datos por teclado sin necesidad de pulsar Enter
- Posicionamiento del cursor en pantalla
- Limpieza de pantalla
- Almacenamiento de contactos en memoria
- Visualización de contactos registrados

---

## 🛠️ Tecnologías utilizadas

- Lenguaje: **C**
- Entorno de desarrollo: **Visual Studio Code**
- Sistema operativo: **Windows 11**
- API de consola de Windows (`windows.h`)
- Entrada de teclado con `_getch()`

---

## ⚠️ Notas importantes

- El proyecto **NO utiliza `conio.h` de Borland**, ya que no es compatible con Visual Studio Code.
- Las funciones `gotoxy()` y `clrscr()` están **reimplementadas usando la API de Windows**.
- El programa no guarda datos en disco; los contactos se pierden al cerrar la aplicación.
- El número máximo de contactos es limitado (según definición del array).

---

## 🎓 Contexto educativo

Este código es representativo de ejercicios clásicos de aprendizaje en C (estructuras, arrays, entrada/salida por consola) y **no está orientado a uso productivo**.

---

## 📜 Licencia

Proyecto de uso libre con fines educativos.
