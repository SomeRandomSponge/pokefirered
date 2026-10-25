PewterCity_Gym_Text_BrockIntro::
    .string "Así que estás aquí. Soy Brock.\n"
    .string "Líder de Gimnasio de Plateada.\p"
    .string "Mi determinación de roca es\n"
    .string "evidente, incluso en mis Pokémon.\p"
    .string "Mis Pokémon son duros como la\n"
    .string "roca, justo como su determinación.\p"
    .string "¡Así es - todos mis Pokémon son\n"
    .string "de tipo ROCA!\p"
    .string "¡Fuajaja! ¿Vas a retarme sabiendo\n"
    .string "que perderás?\p"
    .string "Eso que te motiva a retarme es el\n"
    .string "honor de los Entrenadores.\p"
    .string "¡Muy bien!\n"
    .string "¡Muéstrame lo mejor de ti!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

@ NOTE: This defeat text actually causes a buffer overflow. It's too long for the gDisplayedStringBattle
@ buffer that it's put into, and it stomps all over the gBattleTextBuffs after, as well as the otherwise
@ unused array after that, sFlickerArray. Perhaps that's the reason why said array exists.
PewterCity_Gym_Text_BrockDefeat::
    .string "Te he subestimado, y por\n"
    .string "eso perdí.\p"
    .string "Como prueba de tu victoria, te daré\n"
    .string "esto… La MEDALLA ROCA oficial de\l"
    .string "la Liga Pokémon.\p"
    .string "{FONT_NORMAL}¡{PLAYER} recibió la MEDALLA ROCA\n"
    .string "de Brock!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
    .string "{FONT_MALE}El tener la MEDALLA ROCA hace que\n"
    .string "tus Pokémon sean más poderosos.\p"
    .string "También permite usar el movimiento\n"
    .string "DESTELLO fuera de las batallas.\p"
    .string "Obviamente, un Pokémon debe\n"
    .string "conocer el movimiento para usarlo.$"

PewterCity_Gym_Text_TakeThisWithYou::
    .string "¡Espera!\n"
    .string "Lleva esto contigo.$"

PewterCity_Gym_Text_ReceivedTM39FromBrock::
    .string "{PLAYER} recibió la MT39\n"
    .string "de Brock.$"

PewterCity_Gym_Text_ExplainTM39::
    .string "Las MÁQUINAS TÉCNICAS, o MT,\n"
    .string "contienen técnicas para Pokémon.\p"
    .string "Usar una MT le enseña el\n"
    .string "movimiento contenido a un Pokémon.\p"
    .string "Las MT sirven para un solo uso.\p"
    .string "Así que, cuando uses una, elige\n"
    .string "al Pokémon con cuidado.\p"
    .string "Como sea…\n"
    .string "La MT39 contiene TUMBA ROCAS.\p"
    .string "Lanza rocas al rival y reduce\n"
    .string "su Velocidad.$"

PewterCity_Gym_Text_BrockPostBattle::
    .string "Hay todo tipo de Entrenadores en\n"
    .string "este enorme mundo.\p"
    .string "Pareces tener mucho talento como\n"
    .string "Entrenador{AM} Pokémon.\p"
    .string "Dejame hacer una sugerencia.\p"
    .string "Ve al Gimnasio en Celeste y prueba\n"
    .string "tus habilidades.$"

PewterCity_Gym_Text_DontHaveRoomForThis::
    .string "No tienes espacio para esto.$"

PewterCity_Gym_Text_LiamIntro::
    .string "¡Alto ahí, niñ{OA}!\p"
    .string "¡Estás a diez mil años luz de\n"
    .string "retar a Brock!$"

PewterCity_Gym_Text_LiamDefeat::
    .string "¡Rayos!\p"
    .string "Los años luz no miden tiempo…\n"
    .string "¡Miden distancia!$"

PewterCity_Gym_Text_LiamPostBattle::
    .string "Eres bastante fuerte.\n"
    .string "…¡Pero no tanto como Brock!$"

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
    .string "¡Hola!\n"
    .string "¿Quieres soñar en grande?\p"
    .string "¿Te atreves a soñar con convertirte\n"
    .string "en {ELLA} campe{ONONA} Pokémon?\p"
    .string "No soy Entrenador, pero puedo\n"
    .string "decirte cómo ganar.\p"
    .string "¡Dejáme llevarte a la cima!$"

PewterCity_Gym_Text_LetsGetHappening::
    .string "¡De acuerdo!\n"
    .string "¡Empecemos!$"

PewterCity_Gym_Text_TryDifferentPartyOrders::
    .string "El primer Pokémon que sale a\n"
    .string "pelear es el que esta a la\l"
    .string "izquierda de la LISTA de Pokémon.\p"
    .string "Puede que ganes una ventaja al\n"
    .string "cambiar el orden de tus Pokémon.\p"
    .string "Intenta órdenes diferentes para\n"
    .string "ajustarte al equipo del oponente.$"

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
    .string "¡Es un servicio gratuito!\n"
    .string "¡Empecemos!$"

PewterCity_Gym_Text_YoureChampMaterial::
    .string "¡Justo como creí!\n"
    .string "¡Eres material para ser un{A}\l"  
    .string "campe{ONONA} Pokémon!$"

PewterCity_Gym_Text_GymStatue::
    .string "Gimnasio Pokémon DE Plateada\n"
    .string "Líder: Brock\p"
    .string "Entrenadores victoriosos:\n"
    .string "{RIVAL}$"

PewterCity_Gym_Text_GymStatuePlayerWon::
    .string "Gimnasio Pokémon DE Plateada\n"
    .string "Líder: Brock\p"
    .string "Entrenadores victoriosos:\n"
    .string "{RIVAL}, {PLAYER}$"

