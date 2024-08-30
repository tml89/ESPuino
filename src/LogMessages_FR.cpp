#include "settings.h"

#if (LANGUAGE == FR)
	#include "Log.h"

const char tryConnectMqttS[] = "Tentative de connexion au courtier MQTT : %s";
const char mqttOk[] = "Connexion MQTT établie.";
const char sleepTimerEOP[] = "Minuteur d'arrêt : après la dernière piste de la liste de lecture.";
const char sleepTimerEOT[] = "Minuteur d'arrêt : après la fin de la piste en cours.";
const char sleepTimerStop[] = "Le minuteur d'arrêt a été désactivé.";
const char sleepTimerEO5[] = "Minuteur d'arrêt : après cinq pistes ou la fin de la liste de lecture - selon ce qui est atteint en premier.";
const char sleepTimerAlreadyStopped[] = "Le minuteur d'arrêt est déjà désactivé.";
const char sleepTimerSetTo[] = "Minuteur d'arrêt réglé sur %u minute(s)";
const char allowButtons[] = "Déverrouillage de toutes les touches.";
const char lockButtons[] = "Verrouillage de toutes les touches.";
const char noPlaylistNotAllowedMqtt[] = "Le mode de lecture ne peut pas être ajusté sur 'pas de liste de lecture' via MQTT.";
const char playmodeChangedMQtt[] = "Liste de lecture ajustée via MQTT.";
const char noPlaymodeChangeIfIdle[] = "Le mode de lecture ne peut pas être ajusté tant qu'aucune liste de lecture n'est active.";
const char noValidTopic[] = "Aucun sujet MQTT valide : %s";
const char freePtr[] = "Libération du pointeur : %s (0x%04x)";
const char freeMemory[] = "Mémoire libre : %u octets";
const char writeEntryToNvs[] = "[%u] Stockage de données dans NVS : %s => %s";
const char freeMemoryAfterFree[] = "Mémoire libre après nettoyage : %u octets";
const char releaseMemoryOfOldPlaylist[] = "Libération de la mémoire de l'ancienne liste de lecture (Mémoire libre : %u octets).";
const char dirOrFileDoesNotExist[] = "Le fichier ou le répertoire n'existe pas : %s";
const char unableToAllocateMemForPlaylist[] = "Impossible d'allouer de la mémoire pour la liste de lecture !";
const char unableToAllocateMem[] = "Impossible d'allouer de la mémoire !";
const char fileModeDetected[] = "Mode fichier détecté.";
const char fileInvalid[] = "Fichier non valide: %s";
const char nameOfFileFound[] = "Fichier trouvé : %s";
const char reallocCalled[] = "Mémoire réallouée.";
const char unableToAllocateMemForLinearPlaylist[] = "Impossible d'allouer de la mémoire pour la liste de lecture linéaire !";
const char numberOfValidFiles[] = "Nombre de fichiers/webdiffusions valides : %u";
const char newLoudnessReceivedQueue[] = "Nouveau volume reçu via la file d'attente : %u";
const char newCntrlReceivedQueue[] = "Commande de contrôle reçue via la file d'attente : %u";
const char newPlaylistReceived[] = "Nouvelle liste de lecture reçue avec %d piste(s)";
const char repeatTrackDueToPlaymode[] = "Piste répétée en raison du mode de lecture configuré.";
const char repeatPlaylistDueToPlaymode[] = "Liste de lecture répétée en raison du mode de lecture configuré.";
const char cmndStop[] = "Commande : arrêt";
const char cmndPause[] = "Commande : pause";
const char cmndResumeFromPause[] = "Commande : reprise";
const char cmndNextTrack[] = "Commande : piste suivante";
const char cmndPrevTrack[] = "Commande : piste précédente";
const char cmndFirstTrack[] = "Commande : première piste de la liste de lecture";
const char cmndLastTrack[] = "Commande : dernière piste de la liste de lecture";
const char cmndDoesNotExist[] = "La commande demandée n'existe pas.";
const char lastTrackAlreadyActive[] = "La dernière piste est déjà en cours de lecture.";
const char trackStartAudiobook[] = "Démarrage de la piste en mode de lecture depuis le début.";
const char trackStart[] = "Démarrage de la piste depuis le début.";
const char trackChangeWebstream[] = "Le démarrage depuis le début n'est pas possible en mode webradio.";
const char endOfPlaylistReached[] = "Fin de la liste de lecture atteinte.";
const char trackStartatPos[] = "Démarrage de la piste à la position %u";
const char waitingForTaskQueues[] = "La file d'attente des tâches pour RFID n'existe pas encore, en attente...";
const char rfidScannerReady[] = "Les tags RFID peuvent maintenant être appliqués...";
const char rfidTagDetected[] = "Tag RFID détecté : %s";
const char rfid15693TagDetected[] = "Tag RFID (ISO-15693) détecté : ";
const char rfidTagReceived[] = "Tag RFID reçu";
const char dontAccepctSameRfid[] = "Même tag RFID réappliqué - rejeté ! (%s)";
const char rfidTagUnknownInNvs[] = "Le tag RFID est inconnu dans NVS.";
const char goToSleepDueToIdle[] = "Mise en veille profonde en raison du minuteur d'inactivité...";
const char goToSleepDueToTimer[] = "Mise en veille profonde en raison du minuteur d'arrêt...";
const char goToSleepNow[] = "Mise en veille profonde maintenant !";
const char maxLoudnessReached[] = "Volume maximal déjà atteint !";
const char minLoudnessReached[] = "Volume minimal déjà atteint !";
const char errorOccured[] = "Une erreur s'est produite !";
const char noMp3FilesInDir[] = "Le répertoire ne contient pas de fichiers MP3.";
const char modeSingleTrack[] = "Mode : piste unique";
const char modeSingleTrackLoop[] = "Mode : piste unique en boucle infinie";
const char modeSingleTrackRandom[] = "Mode : piste unique (aléatoire) du répertoire";
const char modeSingleAudiobook[] = "Mode : livre audio";
const char modeSingleAudiobookLoop[] = "Mode : livre audio en boucle infinie";
const char modeAllTrackAlphSorted[] = "Mode : toutes les pistes (par ordre alphabétique) du répertoire '%s'";
const char modeAllTrackRandom[] = "Mode : toutes les pistes (par ordre aléatoire) du répertoire '%s'";
const char modeAllTrackAlphSortedLoop[] = "Mode : toutes les pistes (par ordre alphabétique) du répertoire en boucle infinie";
const char modeAllTrackRandomLoop[] = "Mode : toutes les pistes (par ordre aléatoire) du répertoire en boucle infinie";
const char modeWebstream[] = "Mode : diffusion Web";
const char modeWebstreamM3u[] = "Mode : diffusion Web (fichier .m3u local)";
const char webstreamNotAvailable[] = "Impossible d'accéder à la diffusion Web car aucune connexion Wi-Fi n'est disponible !";
const char modeInvalid[] = "Le mode de lecture n'existe pas !";
const char modeRepeatNone[] = "Mode de répétition : aucune répétition";
const char modeRepeatTrack[] = "Mode de répétition : piste actuelle";
const char modeRepeatPlaylist[] = "Mode de répétition : liste de lecture entière";
const char modeRepeatTracknPlaylist[] = "Mode de répétition : piste et liste de lecture";
const char modificatorAllButtonsLocked[] = "Modificateur : verrouillage de toutes les touches via tag RFID.";
const char modificatorAllButtonsUnlocked[] = "Modificateur : déverrouillage de toutes les touches via tag RFID.";
const char modificatorSleepd[] = "Modificateur : minuteur d'arrêt désactivé.";
const char modificatorSleepTimer15[] = "Modificateur : minuteur d'arrêt activé via RFID (15 minutes).";
const char modificatorSleepTimer30[] = "Modificateur : minuteur d'arrêt activé via RFID (30 minutes).";
const char modificatorSleepTimer60[] = "Modificateur : minuteur d'arrêt activé via RFID (60 minutes).";
const char modificatorSleepTimer120[] = "Modificateur : minuteur d'arrêt activé via RFID (2 heures).";
const char ledsDimmedToNightmode[] = "LEDs atténuées en mode nuit.";
const char ledsDimmedToInitialValue[] = "LEDs atténuées à la valeur initiale.";
const char ledsBrightnessRestored[] = "Luminosité des LED restaurée.";
const char modificatorNotallowedWhenIdle[] = "Le modificateur ne peut pas être appliqué lorsque la liste de lecture est inactive.";
const char modificatorSleepAtEOT[] = "Modificateur : minuteur d'arrêt ajusté après la fin de la piste en cours.";
const char modificatorSleepAtEOP[] = "Modificateur : minuteur d'arrêt ajusté après la fin de la liste de lecture.";
const char modificatorAllTrackAlphSortedLoop[] = "Modificateur : ajusté à toutes les pistes (par ordre alphabétique) en boucle infinie.";
const char modificatorAllTrackRandomLoop[] = "Modificateur : ajusté à toutes les pistes (par ordre aléatoire) en boucle infinie.";
const char modificatorCurTrackLoop[] = "Modificateur : ajusté à la piste en cours en boucle infinie.";
const char modificatorCurAudiobookLoop[] = "Modificateur : ajusté au livre audio en cours en boucle infinie.";
const char modificatorPlaylistLoopActive[] = "Modificateur : ajusté à toutes les pistes en boucle infinie.";
const char modificatorPlaylistLoopDeactive[] = "Modificateur : désactivé toutes les pistes en boucle infinie.";
const char modificatorTrackActive[] = "Modificateur : ajusté à la piste en cours en boucle infinie.";
const char modificatorTrackDeactive[] = "Modificateur : désactivé la piste en cours en boucle infinie.";
const char modificatorNotAllowed[] = "Impossible d'appliquer le modificateur.";
const char modificatorLoopRev[] = "Modificateur : boucle infinie terminée.";
const char modificatorDoesNotExist[] = "Ce type de modificateur de carte n'existe pas %d !";
const char errorOccuredNvs[] = "Une erreur s'est produite lors de la lecture depuis NVS !";
const char statementsReceivedByServer[] = "Données reçues du serveur";
const char apReady[] = "Point d'accès Wi-Fi démarré";
const char httpReady[] = "Serveur HTTP démarré.";
const char unableToMountSd[] = "Impossible de monter la carte SD.";
const char unableToCreateVolQ[] = "Impossible de créer la file d'attente de volume.";
const char unableToCreateRfidQ[] = "Impossible de créer la file d'attente RFID.";
const char unableToCreateMgmtQ[] = "Impossible de créer la file de gestion de lecture.";
const char unableToCreatePlayQ[] = "Impossible de créer la file d'attente de piste.";
const char initialBrightnessfromNvs[] = "Restauration de la luminosité LED initiale depuis NVS : %u";
const char wroteInitialBrightnessToNvs[] = "Stockage de la luminosité LED initiale dans NVS.";
const char restoredInitialBrightnessForNmFromNvs[] = "Luminosité LED restaurée pour le mode nuit depuis NVS : %u";
const char wroteNmBrightnessToNvs[] = "Luminosité LED pour le mode nuit stockée dans NVS.";
const char wroteFtpUserToNvs[] = "Utilisateur FTP stocké dans NVS.";
const char restoredFtpUserFromNvs[] = "Utilisateur FTP restauré depuis NVS : %s";
const char wroteFtpPwdToNvs[] = "Mot de passe FTP stocké dans NVS.";
const char restoredFtpPwdFromNvs[] = "Mot de passe FTP restauré depuis NVS : %s";
const char restoredMaxInactivityFromNvs[] = "Temps d'inactivité maximal restauré depuis NVS : %u minutes";
const char wroteMaxInactivityToNvs[] = "Temps d'inactivité maximal stocké dans NVS.";
const char restoredInitialLoudnessFromNvs[] = "Volume initial restauré depuis NVS : %u";
const char wroteInitialLoudnessToNvs[] = "Volume initial stocké dans NVS.";
const char restoredMaxLoudnessForSpeakerFromNvs[] = "Volume maximal pour le haut-parleur restauré depuis NVS : %u";
const char restoredMaxLoudnessForHeadphoneFromNvs[] = "Volume maximal pour le casque restauré depuis NVS : %u";
const char wroteMaxLoudnessForSpeakerToNvs[] = "Volume maximal pour le haut-parleur écrit dans NVS.";
const char wroteMaxLoudnessForHeadphoneToNvs[] = "Volume maximal pour le casque écrit dans NVS.";
const char maxVolumeSet[] = "Volume maximal défini sur : %u";
const char wroteMqttFlagToNvs[] = "Drapeau MQTT stocké dans NVS.";
const char restoredMqttActiveFromNvs[] = "Drapeau MQTT (activé) restauré depuis NVS : %u";
const char restoredMqttDeactiveFromNvs[] = "Drapeau MQTT (désactivé) restauré depuis NVS : %u";
const char wroteMqttClientIdToNvs[] = "Client MQTT identifiant stocké dans NVS.";
const char restoredMqttClientIdFromNvs[] = "Client MQTT identifiant restauré depuis NVS : %s";
const char wroteMqttServerToNvs[] = "Serveur MQTT stocké dans NVS.";
const char restoredMqttServerFromNvs[] = "Serveur MQTT restauré depuis NVS : %s";
const char wroteMqttUserToNvs[] = "Utilisateur MQTT stocké dans NVS.";
const char restoredMqttUserFromNvs[] = "Utilisateur MQTT restauré depuis NVS : %s";
const char wroteMqttPwdToNvs[] = "Mot de passe MQTT stocké dans NVS.";
const char restoredMqttPwdFromNvs[] = "Mot de passe MQTT restauré depuis NVS : %s";
const char restoredMqttPortFromNvs[] = "Port MQTT restauré depuis NVS : %u";
const char mqttWithPwd[] = "Essayer de se connecter au serveur MQTT avec nom d'utilisateur et mot de passe";
const char mqttWithoutPwd[] = "Essayer de se connecter au serveur MQTT sans nom d'utilisateur et mot de passe";
const char ssidNotFoundInNvs[] = "Impossible de trouver le SSID dans NVS.";
const char wifiStaticIpConfigNotFoundInNvs[] = "Impossible de trouver la configuration IP statique du WiFi dans NVS.";
const char wifiHostnameNotSet[] = "Impossible de trouver la configuration du nom d'hôte dans NVS.";
const char mqttConnFailed[] = "Impossible d'établir une connexion MQTT, nouvel essai : rc=%i (%d / %d)";
const char restoredHostnameFromNvs[] = "Nom d'hôte restauré depuis NVS : %s";
const char currentVoltageMsg[] = "Tension actuelle de la batterie : %.2f V";
const char currentChargeMsg[] = "Charge actuelle de la batterie : %.2f %%";
const char batteryCurrentMsg[] = "Utilisation de la puissance (Batterie) : %.2f mA";
const char batteryTempMsg[] = "Température de la batterie : %.2f °C";
const char batteryCyclesMsg[] = "Cycles de batterie observés : %.2f";
const char batteryLowMsg[] = "Batterie faible";
const char batteryCriticalMsg[] = "Charge de batterie critique. Va passer en mode veille profonde...";
const char sdBootFailedDeepsleep[] = "Échec du démarrage en raison de la carte SD. Va passer en mode veille profonde...";
const char wifiEnabledMsg[] = "Le WiFi sera activé.";
const char wifiDisabledMsg[] = "Le WiFi sera désactivé.";
const char voltageIndicatorLowFromNVS[] = "Niveau de tension inférieur restauré pour l'affichage Neopixel depuis NVS : %.2fV";
const char voltageIndicatorHighFromNVS[] = "Niveau de tension supérieur restauré pour l'affichage Neopixel depuis NVS : %.2fV";
const char batteryCheckIntervalFromNVS[] = "Intervalle de mesure de la batterie ou de l'affichage Neopixel restauré depuis NVS : %u minutes";
const char warningLowVoltageFromNVS[] = "Niveau de tension de la batterie bas restauré pour l'avertissement via Neopixel depuis NVS : %.2fV";
const char warningCriticalVoltageFromNVS[] = "Niveau de tension de batterie critique restauré pour l'avertissement via Neopixel depuis NVS : %.2fV";
const char batteryLowFromNVS[] = "Niveau de batterie faible restauré depuis NVS : %.2f %%";
const char batteryCriticalFromNVS[] = "Niveau de batterie critique restauré depuis NVS : %.2f %%";
const char unableToRestoreLastRfidFromNVS[] = "Impossible de restaurer le dernier RFID depuis NVS";
const char restoredLastRfidFromNVS[] = "Dernier RFID restauré depuis NVS : %s";
const char failedOpenFileForWrite[] = "Impossible d'ouvrir le fichier en écriture";
const char fileWritten[] = "Fichier écrit : %s => %zu octets en %lu ms (%lu kiB/s)";
const char writeFailed[] = "Échec de l'écriture";
const char writingFile[] = "Écriture du fichier : %s";
const char failedToOpenFileForAppending[] = "Impossible d'ouvrir le fichier pour l'ajout";
const char listingDirectory[] = "Liste des répertoires";
const char failedToOpenDirectory[] = "Impossible d'ouvrir le répertoire";
const char notADirectory[] = "Ce n'est pas un répertoire";
const char sdMountedMmc1BitMode[] = "Carte SD montée en mode SD-MMC 1 bit...";
const char sdMountedSpiMode[] = "Montage de la carte SD en mode SPI...";
const char restartWebsite[] = "<p>L'ESPuino est en cours de redémarrage...<br />Retour à la <a href=\"javascript:history.back()\">page précédente</a>.</p>";
const char shutdownWebsite[] = "L'ESPuino est en cours d'arrêt...";
const char mqttMsgReceived[] = "Message MQTT reçu : [Sujet : %s] [Commande : %s]";
const char trackPausedAtPos[] = "Piste en pause à la position : %u (%u)";
const char freeHeapWithoutFtp[] = "Espace libre avant l'allocation FTP : %u";
const char freeHeapWithFtp[] = "Espace libre après l'allocation FTP : %u";
const char freeHeapAfterSetup[] = "Espace libre après la configuration";
const char ftpServerStarted[] = "Serveur FTP démarré";
const char tryStaticIpConfig[] = "Configuration IP statique en cours...";
const char staticIPConfigFailed[] = "Échec de la configuration IP statique";
const char wakeUpRfidNoCard[] = "Réveil causé par la détection de carte à faible puissance. Le champ RF a changé mais aucune carte sur le lecteur n'a été trouvée. Je vais donc retourner en mode veille maintenant...";
const char lowPowerCardSuccess[] = "Passage à la détection de carte à faible puissance : réussite";
const char rememberLastVolume[] = "Volume utilisé avant le dernier arrêt restauré. Cela écrase le volume initial configuré via l'interface Web.";
const char unableToStartFtpServer[] = "Le serveur FTP ne peut pas être démarré. Cela est dû au fait que le service FTP est déjà actif ou parce que le WiFi est indisponible.";
const char unableToTellIpAddress[] = "L'adresse IP ne peut pas être annoncée car il n'y a pas de connexion WiFi disponible.";
const char unableToTellTime[] = "L'heure ne peut pas être annoncée car il n'y a pas de connexion WiFi disponible.";
const char newPlayModeStereo[] = "Nouveau mode : stéréo";
const char newPlayModeMono[] = "Nouveau mode : mono";
const char portExpanderFound[] = "Extenseur de port trouvé";
const char portExpanderNotFound[] = "Impossible de détecter l'extenseur de port";
const char portExpanderInterruptEnabled[] = "Activation de la gestion des interruptions pour l'extenseur de port";
const char playlistGen[] = "Génération de la liste de lecture";
const char bootLoopDetected[] = "Boucle de démarrage détectée ! Le dernier RFID ne sera pas restauré.";
const char noBootLoopDetected[] = "Aucune boucle de démarrage détectée. Super :-)";
const char importCountNokNvs[] = "Nombre d'entrées d'importation non valides : %u";
const char errorReadingTmpfile[] = "Erreur lors de la lecture du fichier temporaire d'importation";
const char errorWritingTmpfile[] = "Erreur lors de l'écriture dans le fichier temporaire d'importation";
const char eraseRfidNvs[] = "Les affectations NVS-RFID sont en cours de suppression...";
const char fwStart[] = "Démarrage de la mise à jour du micrologiciel via OTA...";
const char fwEnd[] = "Mise à jour du micrologiciel terminée";
const char otaNotSupported[] = "La mise à jour du micrologiciel n'est pas prise en charge par cet ESPuino !";
const char otaNotSupportedWebsite[] = "<p>La mise à jour du micrologiciel n'est pas prise en charge par cet ESPuino !<br />Retour à la <a href=\"javascript:history.back()\">page précédente</a>.</p>";
const char noPlaylist[] = "Aucune liste de lecture active.";
const char rfidTagRemoved[] = "Tag RFID retiré";
const char rfidTagReapplied[] = "Tag RFID réappliqué";
const char ftpEnableTooLate[] = "Le FTP ne peut être activé que dans les 30 premières secondes après le démarrage de l'ESPuino. Protection contre les enfants :-)";
const char dateTimeRTC[] = "Date/heure (RTC interne) : %02d.%02d.%4d, %02d:%02d:%02d";
const char syncingViaNtp[] = "Obtention de l'heure actuelle via NTP...";
const char ntpGotTime[] = "Date/heure reçue du serveur NTP : %02d.%02d.%4d, %02d:%02d:%02d";
const char ntpFailed[] = "Échec de l'obtention de l'heure NTP";
const char sdInfo[] = "Taille de la carte SD / espace libre : %llu Mo / %llu Mo";
const char paOn[] = "Haut-parleur activé";
const char paOff[] = "Haut-parleur désactivé";
const char hpOn[] = "Casque activé";
const char hpOff[] = "Casque désactivé";
const char webTxCanceled[] = "Transfert Web annulé en raison du minuteur d'inactivité.";
const char webSaveSettingsError[] = "Échec de la sauvegarde des paramètres pour '%s'";
const char tryToPickRandomDir[] = "Essayer de choisir un sous-répertoire au hasard parmi : %s";
const char pickedRandomDir[] = "Sous-répertoire choisi au hasard : %s";
const char wrongWakeUpGpio[] = "Le GPIO choisi comme broche de réveil n'est pas de type RTC et pour cette raison, il ne peut pas réveiller l'ESP32 ! (GPIO : %u)";
const char currentlyPlaying[] = "'%s' est en cours de lecture (%d sur %d)";
const char secondsJumpForward[] = "Avancé de %d secondes";
const char secondsJumpBackward[] = "Reculé de %d secondes";
const char JumpToPosition[] = "Aller à la position %u/%u";
const char wroteLastTrackToNvs[] = "Écriture de '%s' dans NVS pour l'ID de carte RFID %s avec le mode de lecture %d et la dernière piste %u";
const char wifiConnectionInProgress[] = "Tentative de connexion au WiFi avec le SSID '%s'...";
const char wifiConnectionSuccess[] = "Connecté au WiFi '%s' (force du signal : %d dBm, canal : %d, BSSID : %s)";
const char wifiCurrentIp[] = "Adresse IP actuelle : %s";
const char jsonErrorMsg[] = "Échec de deserializeJson() : %s";
const char jsonbufferOverflow[] = "Tampon JSON trop petit pour les données";
const char wifiDeleteNetwork[] = "Suppression du réseau WiFi enregistré %s";
const char wifiNetworkLoaded[] = "SSID chargé %d depuis le NVS : %s";
const char wifiTooManyNetworks[] = "Le nombre de réseaux dans le NVS est de %d, mais c'est plus que ce qui est autorisé (%d)";
const char wifiAddTooManyNetworks[] = "Plus d'espace disponible pour ajouter un autre réseau WiFi !";
const char wifiAddNetwork[] = "Ajouter le réseau WiFi %s";
const char wifiUpdateNetwork[] = "Mettre à jour le réseau WiFi %s";
const char wifiScanResult[] = "WiFi trouvé avec le SSID %s et une force de signal de %d dBm sur le canal %d, BSSID %s.";
const char cantConnectToWifi[] = "Impossible de se connecter au WiFi.";
const char wifiSetLastSSID[] = "Écrire le dernier SSID réussi dans le NVS pour le chemin rapide WiFi : %s";
const char mDNSStarted[] = "mDNS démarré : http://%s.local";
const char mDNSFailed[] = "Échec de mDNS, nom d'hôte : %s";
#endif
