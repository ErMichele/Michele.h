#include "../Michele.h"

int main () {
    log_message("INFO", "Sistema avviato correttamente.");
    log_message("WARNING", "Livello di memoria basso.");
    log_message("ERROR", "Impossibile trovare il file richiesto (%d).", 404);
}