#include <stdio.h>
#include <time.h>

#define MAX 1024
#define NEW_LINE puts("")

int main(void)
{
    time_t tm1;
    struct tm* tm2;
    char buff[MAX];

    tm1 = time(NULL);
    tm2 = localtime(&tm1);

    // L - zalezy od ustawien lokalnych
    // o - z wiadacym zerem

    // NAZWA MIESIACA XX
    strftime(buff, MAX, "%b ", tm2); puts(buff); // L skrocona
    // ^^ SAME h
    strftime(buff, MAX, "%B", tm2); puts(buff); // L pelna
    NEW_LINE;

    // NAZWA DNIA TYGODNIA XX
    strftime(buff, MAX, "%a", tm2); puts(buff); // L skrocona
    strftime(buff, MAX, "%A", tm2); puts(buff); // L pelna
    NEW_LINE;

    // UPLYW CZASU
    strftime(buff, MAX, "%s", tm2); puts(buff); // liczba sekund od czasu epoch

    // DATA I CZAS XX
    strftime(buff, MAX, "%c", tm2); puts(buff); // all, L - data preferowana dla danej strefy
    NEW_LINE;

    // DATA XX
    strftime(buff, MAX, "%D", tm2); puts(buff); // %m/%d/%y - data amerykanska
    strftime(buff, MAX, "%F", tm2); puts(buff); // %Y-%m-%d - data europejska
    strftime(buff, MAX, "%x", tm2); puts(buff); // L data preferowana
    NEW_LINE;

    // CZAS XX
    strftime(buff, MAX, "%r", tm2); puts(buff); // tm_hour, tm_min, tm_sec, L, %I:%M:%S %p
    strftime(buff, MAX, "%R", tm2); puts(buff); // tm_hour, tm_min, %H:%M
    strftime(buff, MAX, "%T", tm2); puts(buff); // rm_hour, tm_min, tm_sec, %H:%M:%S
    strftime(buff, MAX, "%X", tm2); puts(buff); // L, czas preferowany
    NEW_LINE;

    // STULECIE XX
    strftime(buff, MAX, "%C", tm2); puts(buff); // tm_year
    NEW_LINE;

    // ROK
    strftime(buff, MAX, "%y", tm2); puts(buff); // tm_year, 00-99, z zerem, bez stulecia
    strftime(buff, MAX, "%Y", tm2); puts(buff); // tm_year, 
    strftime(buff, MAX, "%g", tm2); puts(buff); // tm_year, tm_yday, tm_wday - rok tygodniowy bez stulecia
    strftime(buff, MAX, "%G", tm2); puts(buff); // tm_year, tm_yday, tm_wday - rok tygodniowy
    NEW_LINE;

    // MIESIAC XX
    strftime(buff, MAX, "%m", tm2); puts(buff); // tm_mon 01-12, z zerem 
    NEW_LINE;

    // TYDZIEN XX
    strftime(buff, MAX, "%U", tm2); puts(buff); // tm_year, tm_yday, tm_wday, 00-53, z zerem, niedziela jako pierwszy dzien tygodnia
    strftime(buff, MAX, "%W", tm2); puts(buff); // tm_year, tm_yday, tm_wday, 00-53, z zerem, poniedzialek jako pierwszy dzien tygodnia
    strftime(buff, MAX, "%V", tm2); puts(buff); // tm_year, tm_yday, tm_wday, 01-53, z zerem, tydzien ISO
    NEW_LINE;

    // DZIEN ROKU XX
    strftime(buff, MAX, "%j", tm2); puts(buff); // tm_yday, 001-366, z zerem
    NEW_LINE;

    // DZIEN MIESIACA XX
    strftime(buff, MAX, "%d", tm2); puts(buff); // tm_mday, 01-31, z zerem
    strftime(buff, MAX, "%e", tm2); puts(buff); // tm_mday, 1-31, bez zera
    NEW_LINE;

    // DZIEN TYGODNIA XX
    strftime(buff, MAX, "%u", tm2); puts(buff); // tm_wday, 1-7, poniedzialek to 1
    strftime(buff, MAX, "%w", tm2); puts(buff); // tm_wday, 0-6, niedziela to 0
    NEW_LINE;

    // GODZINA XX
    strftime(buff, MAX, "%H", tm2); puts(buff); // tm_hour, 00-23, tryb 24h, z zerem
    strftime(buff, MAX, "%I", tm2); puts(buff); // tm_hour, 01-12, tryb 12h, z zerem
    strftime(buff, MAX, "%k", tm2); puts(buff); // tm_hour, 0-23, tryb 24h, bez zera
    strftime(buff, MAX, "%l", tm2); puts(buff); // tm_hour 1-12, tryb 12h, bez zera
    NEW_LINE;

    // MINUTA XX
    strftime(buff, MAX, "%M", tm2); puts(buff); // tm_min 00-59, z zerem
    NEW_LINE;

    // SEKUNDA XX
    strftime(buff, MAX, "%S", tm2); puts(buff); // tm_sec 00-60, z zerem
    NEW_LINE;

    // PORA DNIA XX
    strftime(buff, MAX, "%p", tm2); puts(buff); // tm_hour, AM-PM
    strftime(buff, MAX, "%P", tm2); puts(buff); // tm_hour, am-pm
    NEW_LINE;

    // STREFA CZASOWA XX
    strftime(buff, MAX, "%z", tm2); puts(buff); // numerycznie
    strftime(buff, MAX, "%Z", tm2); puts(buff); // znakowo
    NEW_LINE;

    // ROZNE
    strftime(buff, MAX, "%n", tm2); puts(buff); // znak nowej linii
    strftime(buff, MAX, "%t", tm2); puts(buff); // znak tabulatora
    strftime(buff, MAX, "%%", tm2); puts(buff); // znak %

    // MODYFIKATORY
    strftime(buff, MAX, "%E", tm2); puts(buff); // alternatywna nazwy lokalne
    strftime(buff, MAX, "%O", tm2); puts(buff); // cyfry rzymksie
    strftime(buff, MAX, "%+", tm2); puts(buff);

    return 0;
}