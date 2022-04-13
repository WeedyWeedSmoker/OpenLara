#ifndef H_LANG_PL
#define H_LANG_PL

// Thanks: Nickelony, Dustie

const char *STR_PL[] = { ""
// help
    , "Wczytywanie..."
    , "Wci)snij H je*zeli potrzebujesz pomocy"
    , helpText
    , "%s@@@"
      "ZAB)OJSTWA %d@@"
      "ZNAJD)ZKI %d@@"
      "SEKRETY %d z %d@@"
      "CZAS %s"
    , "Zapisywanie..."
    , "Zapis uko)nczony!"
    , "B}L|AD ZAPISU!"
    , "TAK"
    , "NIE"
    , "Wy}l"
    , "W}l"
    , "Wy}l"
    , "Side-By-Side"
    , "Anaglif"
    , "Podzielony ekran"
    , "VR"
    , "Niska"
    , ")Srednia"
    , "Wysoka"
    , STR_LANGUAGES
    , "Zastosuj"
    , "Kontroler 1"
    , "Kontroler 2"
    , "Kontroler 3"
    , "Kontroler 4"
    , "Nie Gotowy"
    , "Gracz 1"
    , "Gracz 2"
    , "Wci)snij dowolny przycisk"
    , "%s - Wybierz"
    , "%s - Wr)o)c"
// inventory pages
    , "OPCJE"
    , "EKWIPUNEK"
    , "PRZEDMIOTY"
// save game page
    , "Zapisa)c gr|e?"
    , "Aktualna pozycja"
// inventory option
    , "Gra"
    , "Mapa"
    , "Kompas"
    , "Statystyki"
    , "Posiad}lo)s)c Lary"
    , "Poziom detali"
    , "D)zwi|ek"
    , "Sterowanie"
    , "Gamma"
// passport menu
    , "Wczytaj gr|e"
    , "Nowa gra"
    , "Powt)orz poziom"
    , "Wyjd)z to menu g}l)ownego"
    , "Wyjd)z z gry"
    , "Wybierz poziom"
// detail options
    , "Wybierz poziom detali"
    , "Filtrowanie tekstur"
    , "Jako)s)c )swiat}la"
    , "Jako)s)c cieni"
    , "Jako)s)c wody"
    , "VSync"
    , "Stereoskopia"
    , "Proste przedmioty"
    , "Resolution"
    , STR_SCALE
// sound options
    , "Ustaw g}lo)sno)s)c"
    , "Pog}los"
    , "Napisy"
    , "J|ezyk"
// controls options
    , "Ustaw sterowanie"
    , "Klawiatura"
    , "Kontroler"
    , "Wibracje"
    , "Auto. zmiana celu"
    , "Wielo-celowanie"
    // controls
    , "Lewo", "Prawo", "Prz)od", "Ty}l", "Skok", "Ch)od", "Akcja", "Bro)n", "Rozgl|adanie si|e", "Kucanie", "Sprint", "Przewr)ot", "Ekwipunek", "Menu pauzy"
    , STR_KEYS
// inventory items
    , "Nieznany"
    , "Materia}l wybuchowy"
    , "Pistolety"
    , "Strzelba"
    , "Pistolety Magnum"
    , "Pistolety Uzi"
    , "Amunicja do pistolet)ow"
    , "Naboje do strzelby"
    , "Amunicja do Magnum)ow"
    , "Amunicja do Uzi"
    , "Ma}la apteczka"
    , "Du*za apteczka"
    , "Sztabka o}lowiu"
    , "Dzieci|e"
// keys
    , "Klucz"
    , "Srebrny klucz"
    , "Zardzewia}ly klucz"
    , "Z}loty klucz"
    , "Szafirowy klucz"
    , "Klucz Neptuna"
    , "Klucz Atlasa"
    , "Klucz Damoklesa"
    , "Klucz Thora"
    , "Ozdobiony klucz"
// puzzles
    , "Zagadka"
    , "Z}lota figurka"
    , "Sztabka z}lota"
    , "Z|ebatka"
    , "Bezpiecznik"
    , "Anch"
    , "Oko Horusa"
    , "Piecz|e)c Anubisa"
    , "Skarabeusz"
    , "Klucz do piramidy"
// TR1 subtitles
    /* CAFE */ ,
    ""
    /* LIFT */ ,
    ""
    /* CANYON */ ,
    ""
    /* PRISON */ ,
    ""
    /* 22 */ , ""
    /* 23 */ , ""
    /* 24 */ , ""
    /* 25 */ , ""
    /* 26 */ , "Witaj w mojej posiad}lo)sci! Chod)z, oprowadz|e ci|e."
    /* 27 */ , "U*zywaj przycisk)ow kierunkowych, aby p)oj)s)c do pokoju muzycznego."
    /* 28 */ , "No dobrze, teraz zr)obmy kilka akrobacji.@Wci)snij przycisk Skoku."
    /* 29 */ , "Teraz wci)snij go jeszcze raz wraz z jednym z przycisk)ow@kierunkowych, aby skoczy)c w danym kierunku."
    /* 30 */ , "Ah, g}l)owna hala. Wybacz za te skrzynie,@ale mam kilka rzeczy, kt)ore musz|e wnie)s)c do magazynu,@ale ludzie od dostawy wci|a*z si|e nie zjawili."
    /* 31 */ , "Podejd)z do skrzyni.@Podczas stania w miejscu i wciskania przycisku Prz)od,@wci)snij Akcj|e abym mog}la si|e wspi|a)c na skrzyni|e."
    /* 32 */ , "Tu by}la kiedy)s sala balowa, ale przekszta}lci}lam@j|a we w}lasn|a sal|e gimnastyczn|a.@Co o tym my)slisz?@Zr)obmy kilka )cwicze)n."
    /* 33 */ , "W}la)sciwie, to wsz|edzie nie mog|e tylko biec.@Gdy chc|e by)c ostro*zna, zaczynam chodzi)c.@Trzymaj przycisk Chodu, aby ostro*znie podej)s)c@do bia}lej linii."
    /* 34 */ , "Podczas trzymania przycisku Chodu nie spadn|e@z *zadnej kraw|edzi, nawet je)sli tego spr)obujesz.@)Smia}lo, spr)obuj."
    /* 35 */ , "Je)sli chcesz si|e rozejrze)c, wci)snij i trzymaj przycisk Rozgl|adania si|e.@Podczas trzymania, mo*zesz u*zy)c przycisk)ow@kierunkowych, aby rozejrze)c si|e w dan|a stron|e."
    /* 36 */ , "Je)sli skok jest dla mnie zbyt daleki, mog|e chwyci)c@si|e kraw)edzi, aby uratowa)c si|e od gro)znego upadku.@Podejd)z do kraw|edzi z bia}l|a lini|a a*z si|e zatrzymam.@Wci)snij Skok i od razu wci)snij przycisk Prz)od.@W powietrzu, wci)snij i trzymaj Akcj|e."
    /* 37 */ , "Wci)snij przycisk Prz)od, abym mog}la si|e wspi|a)c."
    /* 38 */ , "Je)sli przed skopkiem zrobi|e rozbieg, mog|e@przeskoczy)c ten dystans bez problemu."
    /* 39 */ , "Podejd)z do kraw|edzi z bia}l|a lini|a a*z si|e zatrzymam.@Potem p)o)s)c przycisk Chodu i raz wci)snij@przycisk Ty}l, abym mia}la miejsce na rozbieg.@Wci)snij przycisk Prz)od i prawie od razu@wci)snij i trzymaj przycisk Skoku.@Dzi|eki temu skocz|e w idealnym momencie."
    /* 40 */ , "No dobra. To jest bardzo du*zy skok.@Zr)ob skok z rozbiegiem tak samo jak przed chwil|a,@ale dodatkowo w powietrzu, wci)snij i trzymaj Akcj|e@abym mog}la si|e chwyci)c kraw|edzi."
    /* 41 */ , "Nie)zle."
    /* 42 */ , "Spr)obuj tu wskoczy)c na g)or|e.@Wci)snij Prz)od i trzymaj Akcj|e."
    /* 43 */ , "I can't climb up because the gap is too small.@But press right and I'll shimmy sideways@until there is room, then press forward."
    /* 44 */ , "Great!@If there is a long drop and I don't want to@hurt myself jumping off I can let myself down carefully."
    /* 45 */ , "Tap backwards, and I'll jump off backwards.@Immediately press and hold the action button,@and I'll grab the ledge on the way down."
    /* 46 */ , "Then let go."
    /* 47 */ , "Let's go for a swim."
    /* 48 */ , "The jump button and the directions@move me around underwater."
    /* 49 */ , "Ah! Air!@Just use forward and left and right@to manoeuvre around on the surface.@Press jump to dive down for another swim about.@Or go to the edge and press action to climb out."
    /* 50 */ , "Right. Now I'd better take off these wet clothes."
    /* 51 */ , "Say cheese!"
    /* 52 */ , "Ain't nothin' personal."
    /* 53 */ , "I still git a pain in my brain from ye.@An' it's tellin' me funny ideas now.@Like to shoot you to hell!"
    /* 54 */ , "You can't bump off me and my brood so easy, Lara."
    /* 55 */ , "A leetle late for the prize giving - non?@Still, it is the taking-part wheech counts."
    /* 56 */ , "You firin' at me?@You firin' at me, huh?@Ain't nobody else, so you must be firin' at me!"
// TR1 levels
    , "Posiad}lo)s)c Lary"
    , "G)orskie jaskinie"
    , "Miasto Vilcabamba"
    , "Zaginiona dolina"
    , "Grobowiec Qualopeca"
    , ")Swi|atynia )sw. Franciszka"
    , "Koloseum"
    , "Pa}lac Midasa"
    , "Cysterna"
    , "Grobowiec Tihocana"
    , "Miasto Khamoon"
    , "Obelisk Khamoon"
    , "Sanktuarium Dzieci|ecia"
    , "Kopalnie Natli"
    , "Atlantyda"
    , "Wielka piramida"
    , "Powr)ot do Egiptu"
    , ")Swi|atynia kota"
    , "Atlantydzka twierdza"
    , "R)oj"
// TR2 levels
    , "Posiad}lo)s)c Lary"
    , "Wielki Mur"
    , "Wenecja"
    , "Kryj)owka Bartoliego"
    , "Opera"
    , "Platforma na morzu"
    , "Strefa nurkowania"
    , "40 s|a*zni"
    , "Wrak Marii Dorii"
    , "Kwatery mieszkalne"
    , "Pok}lad"
    , "Pog)orza Tybetu"
    , "Klasztor Barkhang"
    , "Katakumby Talionu"
    , "Lodowy pa}lac"
    , ")Swi|atynia Xian"
    , "Lewituj|ace wyspy"
    , "Gniazdo smoka"
    , "Nie ma to jak w domu"
// TR3 levels
    , "Posiad}lo)s)c Lary"
    , "D*zungla"
    , "Ruiny )swi|atyni"
    , "Rzeka Ganges"
    , "Jaskinie bogini Kaliya"
    , "Nadbrze*zna wioska"
    , "Miejsce katastrofy"
    , "W|aw)oz Madubu"
    , ")Swi|atynia Puny"
    , "Zatoka Tamizy"
    , "Aldwych"
    , "Lud's Gate"
    , "Dzielnica City"
    , "Pustynia w Nevadzie"
    , "Strefa Wysokiego Nadzoru"
    , "Strefa 51"
    , "Antarktyda"
    , "Kopalnie RX-Tech"
    , "Zaginione miasto Tinnos"
    , "Grota meteorytu"
    , "Wszyscy )Swi|eci"
};

#endif
