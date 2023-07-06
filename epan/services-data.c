/*
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * This is a local copy of the IANA port-numbers file.
 *
 * Wireshark uses it to resolve port numbers into human readable
 * service names, e.g. TCP port 80 -> http.
 *
 * It is subject to copyright and being used with IANA's permission:
 * https://www.wireshark.org/lists/wireshark-dev/200708/msg00160.html
 *
 * The original file can be found at:
 * https://www.iana.org/assignments/service-names-port-numbers/service-names-port-numbers.csv
 */

static ws_services_entry_t global_tcp_udp_services_table[] = {
    { 1, "tcpmux" },                            /* TCP Port Service Multiplexer */
    { 2, "compressnet" },                       /* Management Utility */
    { 3, "compressnet" },                       /* Compression Process */
    { 5, "rje" },                               /* Remote Job Entry */
    { 7, "echo" },                              /* Echo */
    { 9, "discard" },                           /* Discard */
    { 11, "systat" },                           /* Active Users */
    { 13, "daytime" },                          /* Daytime */
    { 17, "qotd" },                             /* Quote of the Day */
    { 18, "msp" },                              /* Message Send Protocol (historic) */
    { 19, "chargen" },                          /* Character Generator */
    { 20, "ftp-data" },                         /* File Transfer [Default Data] */
    { 21, "ftp" },                              /* File Transfer Protocol [Control] */
    { 22, "ssh" },                              /* The Secure Shell (SSH) Protocol */
    { 23, "telnet" },                           /* Telnet */
    { 25, "smtp" },                             /* Simple Mail Transfer */
    { 27, "nsw-fe" },                           /* NSW User System FE */
    { 29, "msg-icp" },                          /* MSG ICP */
    { 31, "msg-auth" },                         /* MSG Authentication */
    { 33, "dsp" },                              /* Display Support Protocol */
    { 37, "time" },                             /* Time */
    { 38, "rap" },                              /* Route Access Protocol */
    { 39, "rlp" },                              /* Resource Location Protocol */
    { 41, "graphics" },                         /* Graphics */
    { 42, "name" },                             /* Host Name Server */
    { 43, "nicname" },                          /* Who Is */
    { 44, "mpm-flags" },                        /* MPM FLAGS Protocol */
    { 45, "mpm" },                              /* Message Processing Module [recv] */
    { 46, "mpm-snd" },                          /* MPM [default send] */
    { 48, "auditd" },                           /* Digital Audit Daemon */
    { 49, "tacacs" },                           /* Login Host Protocol (TACACS) */
    { 50, "re-mail-ck" },                       /* Remote Mail Checking Protocol */
    { 52, "xns-time" },                         /* XNS Time Protocol */
    { 53, "domain" },                           /* Domain Name Server */
    { 54, "xns-ch" },                           /* XNS Clearinghouse */
    { 55, "isi-gl" },                           /* ISI Graphics Language */
    { 56, "xns-auth" },                         /* XNS Authentication */
    { 58, "xns-mail" },                         /* XNS Mail */
    { 62, "acas" },                             /* ACA Services */
    { 63, "whoispp" },                          /* whois++ */
    { 64, "covia" },                            /* Communications Integrator (CI) */
    { 65, "tacacs-ds" },                        /* TACACS-Database Service */
    { 66, "sql-net" },                          /* Oracle SQL*NET */
    { 67, "bootps" },                           /* Bootstrap Protocol Server */
    { 68, "bootpc" },                           /* Bootstrap Protocol Client */
    { 69, "tftp" },                             /* Trivial File Transfer */
    { 70, "gopher" },                           /* Gopher */
    { 71, "netrjs-1" },                         /* Remote Job Service */
    { 72, "netrjs-2" },                         /* Remote Job Service */
    { 73, "netrjs-3" },                         /* Remote Job Service */
    { 74, "netrjs-4" },                         /* Remote Job Service */
    { 76, "deos" },                             /* Distributed External Object Store */
    { 78, "vettcp" },
    { 79, "finger" },                           /* Finger */
    { 80, "http" },                             /* World Wide Web HTTP */
    { 82, "xfer" },                             /* XFER Utility */
    { 83, "mit-ml-dev" },                       /* MIT ML Device */
    { 84, "ctf" },                              /* Common Trace Facility */
    { 85, "mit-ml-dev" },                       /* MIT ML Device */
    { 86, "mfcobol" },                          /* Micro Focus Cobol */
    { 88, "kerberos" },                         /* Kerberos */
    { 89, "su-mit-tg" },                        /* SU/MIT Telnet Gateway */
    { 90, "dnsix" },                            /* DNSIX Securit Attribute Token Map */
    { 91, "mit-dov" },                          /* MIT Dover Spooler */
    { 92, "npp" },                              /* Network Printing Protocol */
    { 93, "dcp" },                              /* Device Control Protocol */
    { 94, "objcall" },                          /* Tivoli Object Dispatcher */
    { 95, "supdup" },                           /* SUPDUP */
    { 96, "dixie" },                            /* DIXIE Protocol Specification */
    { 97, "swift-rvf" },                        /* Swift Remote Virtural File Protocol */
    { 98, "tacnews" },                          /* TAC News */
    { 99, "metagram" },                         /* Metagram Relay */
    { 101, "hostname" },                        /* NIC Host Name Server */
    { 102, "iso-tsap" },                        /* ISO-TSAP Class 0 */
    { 103, "gppitnp" },                         /* Genesis Point-to-Point Trans Net */
    { 104, "acr-nema" },                        /* ACR-NEMA Digital Imag. & Comm. 300 */
    { 105, "cso" },                             /* CCSO name server protocol */
    { 106, "3com-tsmux" },                      /* 3COM-TSMUX */
    { 107, "rtelnet" },                         /* Remote Telnet Service */
    { 108, "snagas" },                          /* SNA Gateway Access Server */
    { 109, "pop2" },                            /* Post Office Protocol - Version 2 */
    { 110, "pop3" },                            /* Post Office Protocol - Version 3 */
    { 111, "sunrpc" },                          /* SUN Remote Procedure Call */
    { 112, "mcidas" },                          /* McIDAS Data Transmission Protocol */
    { 115, "sftp" },                            /* Simple File Transfer Protocol */
    { 116, "ansanotify" },                      /* ANSA REX Notify */
    { 117, "uucp-path" },                       /* UUCP Path Service */
    { 118, "sqlserv" },                         /* SQL Services */
    { 119, "nntp" },                            /* Network News Transfer Protocol */
    { 120, "cfdptkt" },                         /* CFDPTKT */
    { 121, "erpc" },                            /* Encore Expedited Remote Pro.Call */
    { 122, "smakynet" },                        /* SMAKYNET */
    { 123, "ntp" },                             /* Network Time Protocol */
    { 124, "ansatrader" },                      /* ANSA REX Trader */
    { 125, "locus-map" },                       /* Locus PC-Interface Net Map Ser */
    { 126, "nxedit" },                          /* NXEdit */
    { 127, "locus-con" },                       /* Locus PC-Interface Conn Server */
    { 128, "gss-xlicen" },                      /* GSS X License Verification */
    { 129, "pwdgen" },                          /* Password Generator Protocol */
    { 130, "cisco-fna" },                       /* cisco FNATIVE */
    { 131, "cisco-tna" },                       /* cisco TNATIVE */
    { 132, "cisco-sys" },                       /* cisco SYSMAINT */
    { 133, "statsrv" },                         /* Statistics Service */
    { 134, "ingres-net" },                      /* INGRES-NET Service */
    { 135, "epmap" },                           /* DCE endpoint resolution */
    { 136, "profile" },                         /* PROFILE Naming System */
    { 137, "netbios-ns" },                      /* NETBIOS Name Service */
    { 138, "netbios-dgm" },                     /* NETBIOS Datagram Service */
    { 139, "netbios-ssn" },                     /* NETBIOS Session Service */
    { 140, "emfis-data" },                      /* EMFIS Data Service */
    { 141, "emfis-cntl" },                      /* EMFIS Control Service */
    { 142, "bl-idm" },                          /* Britton-Lee IDM */
    { 144, "uma" },                             /* Universal Management Architecture */
    { 145, "uaac" },                            /* UAAC Protocol */
    { 146, "iso-tp0" },                         /* ISO-IP0 */
    { 147, "iso-ip" },                          /* ISO-IP */
    { 148, "jargon" },                          /* Jargon */
    { 149, "aed-512" },                         /* AED 512 Emulation Service */
    { 150, "sql-net" },                         /* SQL-NET */
    { 151, "hems" },                            /* HEMS */
    { 152, "bftp" },                            /* Background File Transfer Program */
    { 153, "sgmp" },                            /* SGMP */
    { 154, "netsc-prod" },                      /* NETSC */
    { 155, "netsc-dev" },                       /* NETSC */
    { 156, "sqlsrv" },                          /* SQL Service */
    { 157, "knet-cmp" },                        /* KNET/VM Command/Message Protocol */
    { 158, "pcmail-srv" },                      /* PCMail Server */
    { 159, "nss-routing" },                     /* NSS-Routing */
    { 160, "sgmp-traps" },                      /* SGMP-TRAPS */
    { 161, "snmp" },                            /* SNMP */
    { 162, "snmptrap" },                        /* SNMPTRAP */
    { 163, "cmip-man" },                        /* CMIP/TCP Manager */
    { 164, "cmip-agent" },                      /* CMIP/TCP Agent */
    { 165, "xns-courier" },                     /* Xerox */
    { 166, "s-net" },                           /* Sirius Systems */
    { 167, "namp" },                            /* NAMP */
    { 168, "rsvd" },                            /* RSVD */
    { 169, "send" },                            /* SEND */
    { 170, "print-srv" },                       /* Network PostScript */
    { 171, "multiplex" },                       /* Network Innovations Multiplex */
    { 172, "cl-1" },                            /* Network Innovations CL/1 */
    { 173, "xyplex-mux" },                      /* Xyplex */
    { 174, "mailq" },                           /* MAILQ */
    { 175, "vmnet" },                           /* VMNET */
    { 176, "genrad-mux" },                      /* GENRAD-MUX */
    { 177, "xdmcp" },                           /* X Display Manager Control Protocol */
    { 178, "nextstep" },                        /* NextStep Window Server */
    { 179, "bgp" },                             /* Border Gateway Protocol */
    { 180, "ris" },                             /* Intergraph */
    { 181, "unify" },                           /* Unify */
    { 182, "audit" },                           /* Unisys Audit SITP */
    { 183, "ocbinder" },                        /* OCBinder */
    { 184, "ocserver" },                        /* OCServer */
    { 185, "remote-kis" },                      /* Remote-KIS */
    { 186, "kis" },                             /* KIS Protocol */
    { 187, "aci" },                             /* Application Communication Interface */
    { 188, "mumps" },                           /* Plus Five's MUMPS */
    { 189, "qft" },                             /* Queued File Transport */
    { 190, "gacp" },                            /* Gateway Access Control Protocol */
    { 191, "prospero" },                        /* Prospero Directory Service */
    { 192, "osu-nms" },                         /* OSU Network Monitoring System */
    { 193, "srmp" },                            /* Spider Remote Monitoring Protocol */
    { 194, "irc" },                             /* Internet Relay Chat Protocol */
    { 195, "dn6-nlm-aud" },                     /* DNSIX Network Level Module Audit */
    { 196, "dn6-smm-red" },                     /* DNSIX Session Mgt Module Audit Redir */
    { 197, "dls" },                             /* Directory Location Service */
    { 198, "dls-mon" },                         /* Directory Location Service Monitor */
    { 199, "smux" },                            /* SMUX */
    { 200, "src" },                             /* IBM System Resource Controller */
    { 201, "at-rtmp" },                         /* AppleTalk Routing Maintenance */
    { 202, "at-nbp" },                          /* AppleTalk Name Binding */
    { 203, "at-3" },                            /* AppleTalk Unused */
    { 204, "at-echo" },                         /* AppleTalk Echo */
    { 205, "at-5" },                            /* AppleTalk Unused */
    { 206, "at-zis" },                          /* AppleTalk Zone Information */
    { 207, "at-7" },                            /* AppleTalk Unused */
    { 208, "at-8" },                            /* AppleTalk Unused */
    { 209, "qmtp" },                            /* The Quick Mail Transfer Protocol */
    { 210, "z39-50" },                          /* ANSI Z39.50 */
    { 211, "914c-g" },                          /* Texas Instruments 914C/G Terminal */
    { 212, "anet" },                            /* ATEXSSTR */
    { 213, "ipx" },                             /* IPX */
    { 214, "vmpwscs" },                         /* VM PWSCS */
    { 215, "softpc" },                          /* Insignia Solutions */
    { 216, "CAIlic" },                          /* Computer Associates Int'l License Server */
    { 217, "dbase" },                           /* dBASE Unix */
    { 218, "mpp" },                             /* Netix Message Posting Protocol */
    { 219, "uarps" },                           /* Unisys ARPs */
    { 220, "imap3" },                           /* Interactive Mail Access Protocol v3 */
    { 221, "fln-spx" },                         /* Berkeley rlogind with SPX auth */
    { 222, "rsh-spx" },                         /* Berkeley rshd with SPX auth */
    { 223, "cdc" },                             /* Certificate Distribution Center */
    { 224, "masqdialer" },
    { 242, "direct" },                          /* Direct */
    { 243, "sur-meas" },                        /* Survey Measurement */
    { 244, "inbusiness" },
    { 245, "link" },                            /* LINK */
    { 246, "dsp3270" },                         /* Display Systems Protocol */
    { 247, "subntbcst-tftp" },                  /* SUBNTBCST_TFTP */
    { 248, "bhfhs" },
    { 256, "rap" },                             /* RAP */
    { 257, "set" },                             /* Secure Electronic Transaction */
    { 259, "esro-gen" },                        /* Efficient Short Remote Operations */
    { 260, "openport" },                        /* Openport */
    { 261, "nsiiops" },                         /* IIOP Name Service over TLS/SSL */
    { 262, "arcisdms" },                        /* Arcisdms */
    { 263, "hdap" },                            /* HDAP */
    { 264, "bgmp" },                            /* BGMP */
    { 265, "x-bone-ctl" },                      /* X-Bone CTL */
    { 266, "sst" },                             /* SCSI on ST */
    { 267, "td-service" },                      /* Tobit David Service Layer */
    { 268, "td-replica" },                      /* Tobit David Replica */
    { 269, "manet" },                           /* MANET Protocols */
    { 280, "http-mgmt" },
    { 281, "personal-link" },                   /* Personal Link */
    { 282, "cableport-ax" },                    /* Cable Port A/X */
    { 283, "rescap" },
    { 284, "corerjd" },
    { 286, "fxp" },                             /* FXP Communication */
    { 287, "k-block" },                         /* K-BLOCK */
    { 308, "novastorbakcup" },                  /* Novastor Backup */
    { 309, "entrusttime" },                     /* EntrustTime */
    { 310, "bhmds" },
    { 311, "asip-webadmin" },                   /* AppleShare IP WebAdmin */
    { 312, "vslmp" },                           /* VSLMP */
    { 313, "magenta-logic" },                   /* Magenta Logic */
    { 314, "opalis-robot" },                    /* Opalis Robot */
    { 315, "dpsi" },                            /* DPSI */
    { 316, "decauth" },                         /* decAuth */
    { 317, "zannet" },                          /* Zannet */
    { 318, "pkix-timestamp" },                  /* PKIX TimeStamp */
    { 319, "ptp-event" },                       /* PTP Event */
    { 320, "ptp-general" },                     /* PTP General */
    { 321, "pip" },                             /* PIP */
    { 322, "rtsps" },                           /* RTSPS */
    { 333, "texar" },                           /* Texar Security Port */
    { 344, "pdap" },                            /* Prospero Data Access Protocol */
    { 345, "pawserv" },                         /* Perf Analysis Workbench */
    { 346, "zserv" },                           /* Zebra server */
    { 347, "fatserv" },                         /* Fatmen Server */
    { 348, "csi-sgwp" },                        /* Cabletron Management Protocol */
    { 349, "mftp" },
    { 350, "matip-type-a" },                    /* MATIP Type A */
    { 351, "matip-type-b" },                    /* MATIP Type B */
    { 352, "dtag-ste-sb" },                     /* DTAG */
    { 353, "ndsauth" },                         /* NDSAUTH */
    { 354, "bh611" },
    { 355, "datex-asn" },                       /* DATEX-ASN */
    { 356, "cloanto-net-1" },                   /* Cloanto Net 1 */
    { 357, "bhevent" },
    { 358, "shrinkwrap" },                      /* Shrinkwrap */
    { 359, "nsrmp" },                           /* Network Security Risk Management Protocol */
    { 360, "scoi2odialog" },
    { 361, "semantix" },                        /* Semantix */
    { 362, "srssend" },                         /* SRS Send */
    { 363, "rsvp-tunnel" },                     /* RSVP Tunnel */
    { 364, "aurora-cmgr" },                     /* Aurora CMGR */
    { 365, "dtk" },                             /* DTK */
    { 366, "odmr" },                            /* ODMR */
    { 367, "mortgageware" },                    /* MortgageWare */
    { 368, "qbikgdp" },                         /* QbikGDP */
    { 369, "rpc2portmap" },
    { 370, "codaauth2" },
    { 371, "clearcase" },                       /* Clearcase */
    { 372, "ulistproc" },                       /* ListProcessor */
    { 373, "legent-1" },                        /* Legent Corporation */
    { 374, "legent-2" },                        /* Legent Corporation */
    { 375, "hassle" },                          /* Hassle */
    { 376, "nip" },                             /* Amiga Envoy Network Inquiry Protocol */
    { 377, "tnETOS" },                          /* NEC Corporation */
    { 378, "dsETOS" },                          /* NEC Corporation */
    { 379, "is99c" },                           /* TIA/EIA/IS-99 modem client */
    { 380, "is99s" },                           /* TIA/EIA/IS-99 modem server */
    { 381, "hp-collector" },                    /* hp performance data collector */
    { 382, "hp-managed-node" },                 /* hp performance data managed node */
    { 383, "hp-alarm-mgr" },                    /* hp performance data alarm manager */
    { 384, "arns" },                            /* A Remote Network Server System */
    { 385, "ibm-app" },                         /* IBM Application */
    { 386, "asa" },                             /* ASA Message Router Object Def. */
    { 387, "aurp" },                            /* Appletalk Update-Based Routing Pro. */
    { 388, "unidata-ldm" },                     /* Unidata LDM */
    { 389, "ldap" },                            /* Lightweight Directory Access Protocol */
    { 390, "uis" },                             /* UIS */
    { 391, "synotics-relay" },                  /* SynOptics SNMP Relay Port */
    { 392, "synotics-broker" },                 /* SynOptics Port Broker Port */
    { 393, "meta5" },                           /* Meta5 */
    { 394, "embl-ndt" },                        /* EMBL Nucleic Data Transfer */
    { 395, "netcp" },                           /* NetScout Control Protocol */
    { 396, "netware-ip" },                      /* Novell Netware over IP */
    { 397, "mptn" },                            /* Multi Protocol Trans. Net. */
    { 398, "kryptolan" },                       /* Kryptolan */
    { 399, "iso-tsap-c2" },                     /* ISO Transport Class 2 Non-Control over TCP */
    { 400, "osb-sd" },                          /* Oracle Secure Backup */
    { 401, "ups" },                             /* Uninterruptible Power Supply */
    { 402, "genie" },                           /* Genie Protocol */
    { 403, "decap" },
    { 404, "nced" },
    { 405, "ncld" },
    { 406, "imsp" },                            /* Interactive Mail Support Protocol */
    { 407, "timbuktu" },                        /* Timbuktu */
    { 408, "prm-sm" },                          /* Prospero Resource Manager Sys. Man. */
    { 409, "prm-nm" },                          /* Prospero Resource Manager Node Man. */
    { 410, "decladebug" },                      /* DECLadebug Remote Debug Protocol */
    { 411, "rmt" },                             /* Remote MT Protocol */
    { 412, "synoptics-trap" },                  /* Trap Convention Port */
    { 413, "smsp" },                            /* Storage Management Services Protocol */
    { 414, "infoseek" },                        /* InfoSeek */
    { 415, "bnet" },                            /* BNet */
    { 416, "silverplatter" },                   /* Silverplatter */
    { 417, "onmux" },                           /* Onmux */
    { 418, "hyper-g" },                         /* Hyper-G */
    { 419, "ariel1" },                          /* Ariel 1 */
    { 420, "smpte" },                           /* SMPTE */
    { 421, "ariel2" },                          /* Ariel 2 */
    { 422, "ariel3" },                          /* Ariel 3 */
    { 423, "opc-job-start" },                   /* IBM Operations Planning and Control Start */
    { 424, "opc-job-track" },                   /* IBM Operations Planning and Control Track */
    { 425, "icad-el" },                         /* ICAD */
    { 426, "smartsdp" },
    { 427, "svrloc" },                          /* Server Location */
    { 428, "ocs-cmu" },                         /* OCS_CMU */
    { 429, "ocs-amu" },                         /* OCS_AMU */
    { 430, "utmpsd" },                          /* UTMPSD */
    { 431, "utmpcd" },                          /* UTMPCD */
    { 432, "iasd" },                            /* IASD */
    { 433, "nnsp" },                            /* NNTP for transit servers (NNSP) */
    { 434, "mobileip-agent" },                  /* MobileIP-Agent */
    { 435, "mobilip-mn" },                      /* MobilIP-MN */
    { 436, "dna-cml" },                         /* DNA-CML */
    { 437, "comscm" },
    { 438, "dsfgw" },
    { 439, "dasp" },
    { 440, "sgcp" },
    { 441, "decvms-sysmgt" },
    { 442, "cvc-hostd" },                       /* cvc_hostd */
    { 443, "https" },                           /* http protocol over TLS/SSL */
    { 444, "snpp" },                            /* Simple Network Paging Protocol */
    { 445, "microsoft-ds" },                    /* Microsoft-DS */
    { 446, "ddm-rdb" },                         /* DDM-Remote Relational Database Access */
    { 447, "ddm-dfm" },                         /* DDM-Distributed File Management */
    { 448, "ddm-ssl" },                         /* DDM-Remote DB Access Using Secure Sockets */
    { 449, "as-servermap" },                    /* AS Server Mapper */
    { 450, "tserver" },                         /* Computer Supported Telecomunication Applications */
    { 451, "sfs-smp-net" },                     /* Cray Network Semaphore server */
    { 452, "sfs-config" },                      /* Cray SFS config server */
    { 453, "creativeserver" },                  /* CreativeServer */
    { 454, "contentserver" },                   /* ContentServer */
    { 455, "creativepartnr" },                  /* CreativePartnr */
    { 457, "scohelp" },
    { 458, "appleqtc" },                        /* apple quick time */
    { 459, "ampr-rcmd" },
    { 460, "skronk" },
    { 461, "datasurfsrv" },                     /* DataRampSrv */
    { 462, "datasurfsrvsec" },                  /* DataRampSrvSec */
    { 463, "alpes" },
    { 464, "kpasswd" },
    { 466, "digital-vrc" },
    { 467, "mylex-mapd" },
    { 468, "photuris" },                        /* proturis */
    { 469, "rcp" },                             /* Radio Control Protocol */
    { 470, "scx-proxy" },
    { 471, "mondex" },                          /* Mondex */
    { 472, "ljk-login" },
    { 473, "hybrid-pop" },
    { 475, "tcpnethaspsrv" },
    { 476, "tn-tl-fd1" },
    { 477, "ss7ns" },
    { 478, "spsc" },
    { 479, "iafserver" },
    { 480, "iafdbase" },
    { 481, "ph" },                              /* Ph service */
    { 482, "bgs-nsi" },
    { 483, "ulpnet" },
    { 484, "integra-sme" },                     /* Integra Software Management Environment */
    { 485, "powerburst" },                      /* Air Soft Power Burst */
    { 486, "avian" },
    { 487, "saft" },                            /* saft Simple Asynchronous File Transfer */
    { 488, "gss-http" },
    { 489, "nest-protocol" },
    { 490, "micom-pfs" },
    { 491, "go-login" },
    { 492, "ticf-1" },                          /* Transport Independent Convergence for FNA */
    { 493, "ticf-2" },                          /* Transport Independent Convergence for FNA */
    { 494, "pov-ray" },                         /* POV-Ray */
    { 495, "intecourier" },
    { 496, "pim-rp-disc" },                     /* PIM-RP-DISC */
    { 497, "retrospect" },                      /* Retrospect backup and restore service */
    { 498, "siam" },
    { 499, "iso-ill" },                         /* ISO ILL Protocol */
    { 500, "isakmp" },
    { 501, "stmf" },                            /* STMF */
    { 502, "mbap" },                            /* Modbus Application Protocol */
    { 503, "intrinsa" },                        /* Intrinsa */
    { 504, "citadel" },
    { 505, "mailbox-lm" },
    { 506, "ohimsrv" },
    { 507, "crs" },
    { 508, "xvttp" },
    { 509, "snare" },
    { 510, "fcp" },                             /* FirstClass Protocol */
    { 511, "passgo" },                          /* PassGo */
    { 515, "printer" },                         /* spooler */
    { 516, "videotex" },
    { 517, "talk" },                            /* like tenex link, but across machine - unfortunately, doesn't use link protocol (this is actually just a rendezvous port from which a tcp connection is established) */
    { 518, "ntalk" },
    { 519, "utime" },                           /* unixtime */
    { 521, "ripng" },
    { 522, "ulp" },                             /* ULP */
    { 523, "ibm-db2" },                         /* IBM-DB2 */
    { 524, "ncp" },                             /* NCP */
    { 525, "timed" },                           /* timeserver */
    { 526, "tempo" },                           /* newdate */
    { 527, "stx" },                             /* Stock IXChange */
    { 528, "custix" },                          /* Customer IXChange */
    { 529, "irc-serv" },                        /* IRC-SERV */
    { 530, "courier" },                         /* rpc */
    { 531, "conference" },                      /* chat */
    { 532, "netnews" },                         /* readnews */
    { 533, "netwall" },                         /* for emergency broadcasts */
    { 534, "windream" },                        /* windream Admin */
    { 535, "iiop" },
    { 536, "opalis-rdv" },
    { 537, "nmsp" },                            /* Networked Media Streaming Protocol */
    { 538, "gdomap" },
    { 539, "apertus-ldp" },                     /* Apertus Technologies Load Determination */
    { 540, "uucp" },                            /* uucpd */
    { 541, "uucp-rlogin" },
    { 542, "commerce" },
    { 543, "klogin" },
    { 544, "kshell" },                          /* krcmd */
    { 545, "appleqtcsrvr" },
    { 546, "dhcpv6-client" },                   /* DHCPv6 Client */
    { 547, "dhcpv6-server" },                   /* DHCPv6 Server */
    { 548, "afpovertcp" },                      /* AFP over TCP */
    { 549, "idfp" },                            /* IDFP */
    { 550, "new-rwho" },                        /* new-who */
    { 551, "cybercash" },
    { 552, "devshr-nts" },                      /* DeviceShare */
    { 553, "pirp" },
    { 554, "rtsp" },                            /* Real Time Streaming Protocol (RTSP) */
    { 555, "dsf" },
    { 556, "remotefs" },                        /* rfs server */
    { 557, "openvms-sysipc" },
    { 558, "sdnskmp" },                         /* SDNSKMP */
    { 559, "teedtap" },                         /* TEEDTAP */
    { 560, "rmonitor" },                        /* rmonitord */
    { 561, "monitor" },
    { 562, "chshell" },                         /* chcmd */
    { 563, "nntps" },                           /* nntp protocol over TLS/SSL (was snntp) */
    { 564, "9pfs" },                            /* plan 9 file service */
    { 565, "whoami" },
    { 566, "streettalk" },
    { 567, "banyan-rpc" },
    { 568, "ms-shuttle" },                      /* microsoft shuttle */
    { 569, "ms-rome" },                         /* microsoft rome */
    { 570, "meter" },                           /* demon */
    { 571, "meter" },                           /* udemon */
    { 572, "sonar" },
    { 573, "banyan-vip" },
    { 574, "ftp-agent" },                       /* FTP Software Agent System */
    { 575, "vemmi" },                           /* VEMMI */
    { 576, "ipcd" },
    { 577, "vnas" },
    { 578, "ipdd" },
    { 579, "decbsrv" },
    { 580, "sntp-heartbeat" },                  /* SNTP HEARTBEAT */
    { 581, "bdp" },                             /* Bundle Discovery Protocol */
    { 582, "scc-security" },                    /* SCC Security */
    { 583, "philips-vc" },                      /* Philips Video-Conferencing */
    { 584, "keyserver" },                       /* Key Server */
    { 586, "password-chg" },                    /* Password Change */
    { 587, "submission" },                      /* Message Submission */
    { 588, "cal" },                             /* CAL */
    { 589, "eyelink" },                         /* EyeLink */
    { 590, "tns-cml" },                         /* TNS CML */
    { 591, "http-alt" },                        /* FileMaker, Inc. - HTTP Alternate (see Port 80) */
    { 592, "eudora-set" },                      /* Eudora Set */
    { 593, "http-rpc-epmap" },                  /* HTTP RPC Ep Map */
    { 594, "tpip" },                            /* TPIP */
    { 595, "cab-protocol" },                    /* CAB Protocol */
    { 596, "smsd" },                            /* SMSD */
    { 597, "ptcnameservice" },                  /* PTC Name Service */
    { 598, "sco-websrvrmg3" },                  /* SCO Web Server Manager 3 */
    { 599, "acp" },                             /* Aeolon Core Protocol */
    { 600, "ipcserver" },                       /* Sun IPC server */
    { 601, "syslog-conn" },                     /* Reliable Syslog Service */
    { 602, "xmlrpc-beep" },                     /* XML-RPC over BEEP */
    { 603, "idxp" },                            /* IDXP */
    { 604, "tunnel" },                          /* TUNNEL */
    { 605, "soap-beep" },                       /* SOAP over BEEP */
    { 606, "urm" },                             /* Cray Unified Resource Manager */
    { 607, "nqs" },
    { 608, "sift-uft" },                        /* Sender-Initiated/Unsolicited File Transfer */
    { 609, "npmp-trap" },
    { 610, "npmp-local" },
    { 611, "npmp-gui" },
    { 612, "hmmp-ind" },                        /* HMMP Indication */
    { 613, "hmmp-op" },                         /* HMMP Operation */
    { 614, "sshell" },                          /* SSLshell */
    { 615, "sco-inetmgr" },                     /* Internet Configuration Manager */
    { 616, "sco-sysmgr" },                      /* SCO System Administration Server */
    { 617, "sco-dtmgr" },                       /* SCO Desktop Administration Server */
    { 618, "dei-icda" },                        /* DEI-ICDA */
    { 619, "compaq-evm" },                      /* Compaq EVM */
    { 620, "sco-websrvrmgr" },                  /* SCO WebServer Manager */
    { 621, "escp-ip" },                         /* ESCP */
    { 622, "collaborator" },                    /* Collaborator */
    { 624, "cryptoadmin" },                     /* Crypto Admin */
    { 625, "dec-dlm" },                         /* DEC DLM */
    { 626, "asia" },                            /* ASIA */
    { 627, "passgo-tivoli" },                   /* PassGo Tivoli */
    { 628, "qmqp" },                            /* QMQP */
    { 629, "3com-amp3" },                       /* 3Com AMP3 */
    { 630, "rda" },                             /* RDA */
    { 631, "ipp" },                             /* IPP (Internet Printing Protocol) */
    { 632, "bmpp" },
    { 633, "servstat" },                        /* Service Status update (Sterling Software) */
    { 634, "ginad" },
    { 635, "rlzdbase" },                        /* RLZ DBase */
    { 636, "ldaps" },                           /* ldap protocol over TLS/SSL (was sldap) */
    { 637, "lanserver" },
    { 638, "mcns-sec" },
    { 639, "msdp" },                            /* MSDP */
    { 640, "entrust-sps" },
    { 641, "repcmd" },
    { 642, "esro-emsdp" },                      /* ESRO-EMSDP V1.3 */
    { 643, "sanity" },                          /* SANity */
    { 644, "dwr" },
    { 645, "pssc" },                            /* PSSC */
    { 646, "ldp" },                             /* LDP */
    { 647, "dhcp-failover" },                   /* DHCP Failover */
    { 648, "rrp" },                             /* Registry Registrar Protocol (RRP) */
    { 649, "cadview-3d" },                      /* Cadview-3d - streaming 3d models over the internet */
    { 650, "obex" },                            /* OBEX */
    { 651, "ieee-mms" },                        /* IEEE MMS */
    { 652, "hello-port" },                      /* HELLO_PORT */
    { 653, "repscmd" },                         /* RepCmd */
    { 654, "aodv" },                            /* AODV */
    { 655, "tinc" },                            /* TINC */
    { 656, "spmp" },                            /* SPMP */
    { 657, "rmc" },                             /* RMC */
    { 658, "tenfold" },                         /* TenFold */
    { 660, "mac-srvr-admin" },                  /* MacOS Server Admin */
    { 661, "hap" },                             /* HAP */
    { 662, "pftp" },                            /* PFTP */
    { 663, "purenoise" },                       /* PureNoise */
    { 665, "sun-dr" },                          /* Sun DR */
    { 666, "mdqs" },
    { 667, "disclose" },                        /* campaign contribution disclosures - SDR Technologies */
    { 668, "mecomm" },                          /* MeComm */
    { 669, "meregister" },                      /* MeRegister */
    { 670, "vacdsm-sws" },                      /* VACDSM-SWS */
    { 671, "vacdsm-app" },                      /* VACDSM-APP */
    { 672, "vpps-qua" },                        /* VPPS-QUA */
    { 673, "cimplex" },                         /* CIMPLEX */
    { 674, "acap" },                            /* ACAP */
    { 675, "dctp" },                            /* DCTP */
    { 676, "vpps-via" },                        /* VPPS Via */
    { 677, "vpp" },                             /* Virtual Presence Protocol */
    { 678, "ggf-ncp" },                         /* GNU Generation Foundation NCP */
    { 679, "mrm" },                             /* MRM */
    { 680, "entrust-aaas" },
    { 681, "entrust-aams" },
    { 682, "xfr" },                             /* XFR */
    { 683, "corba-iiop" },                      /* CORBA IIOP */
    { 684, "corba-iiop-ssl" },                  /* CORBA IIOP SSL */
    { 685, "mdc-portmapper" },                  /* MDC Port Mapper */
    { 686, "hcp-wismar" },                      /* Hardware Control Protocol Wismar */
    { 687, "asipregistry" },
    { 688, "realm-rusd" },                      /* ApplianceWare managment protocol */
    { 689, "nmap" },                            /* NMAP */
    { 690, "vatp" },                            /* Velneo Application Transfer Protocol */
    { 691, "msexch-routing" },                  /* MS Exchange Routing */
    { 692, "hyperwave-isp" },                   /* Hyperwave-ISP */
    { 693, "connendp" },                        /* almanid Connection Endpoint */
    { 694, "ha-cluster" },
    { 695, "ieee-mms-ssl" },                    /* IEEE-MMS-SSL */
    { 696, "rushd" },                           /* RUSHD */
    { 697, "uuidgen" },                         /* UUIDGEN */
    { 698, "olsr" },                            /* OLSR */
    { 699, "accessnetwork" },                   /* Access Network */
    { 700, "epp" },                             /* Extensible Provisioning Protocol */
    { 701, "lmp" },                             /* Link Management Protocol (LMP) */
    { 702, "iris-beep" },                       /* IRIS over BEEP */
    { 704, "elcsd" },                           /* errlog copy/server daemon */
    { 705, "agentx" },                          /* AgentX */
    { 706, "silc" },                            /* SILC */
    { 707, "borland-dsj" },                     /* Borland DSJ */
    { 709, "entrust-kmsh" },                    /* Entrust Key Management Service Handler */
    { 710, "entrust-ash" },                     /* Entrust Administration Service Handler */
    { 711, "cisco-tdp" },                       /* Cisco TDP */
    { 712, "tbrpf" },                           /* TBRPF */
    { 713, "iris-xpc" },                        /* IRIS over XPC */
    { 714, "iris-xpcs" },                       /* IRIS over XPCS */
    { 715, "iris-lwz" },                        /* IRIS-LWZ */
    { 729, "netviewdm1" },                      /* IBM NetView DM/6000 Server/Client */
    { 730, "netviewdm2" },                      /* IBM NetView DM/6000 send/tcp */
    { 731, "netviewdm3" },                      /* IBM NetView DM/6000 receive/tcp */
    { 741, "netgw" },                           /* netGW */
    { 742, "netrcs" },                          /* Network based Rev. Cont. Sys. */
    { 744, "flexlm" },                          /* Flexible License Manager */
    { 747, "fujitsu-dev" },                     /* Fujitsu Device Control */
    { 748, "ris-cm" },                          /* Russell Info Sci Calendar Manager */
    { 749, "kerberos-adm" },                    /* kerberos administration */
    { 751, "pump" },
    { 752, "qrh" },
    { 753, "rrh" },
    { 754, "tell" },                            /* send */
    { 758, "nlogin" },
    { 759, "con" },
    { 760, "ns" },
    { 761, "rxe" },
    { 762, "quotad" },
    { 763, "cycleserv" },
    { 764, "omserv" },
    { 765, "webster" },
    { 767, "phonebook" },                       /* phone */
    { 769, "vid" },
    { 770, "cadlock" },
    { 771, "rtip" },
    { 772, "cycleserv2" },
    { 776, "wpages" },
    { 777, "multiling-http" },                  /* Multiling HTTP */
    { 780, "wpgs" },
    { 800, "mdbs-daemon" },
    { 801, "device" },
    { 802, "mbap-s" },                          /* Modbus Application Protocol Secure */
    { 810, "fcp-udp" },                         /* FCP */
    { 828, "itm-mcell-s" },
    { 829, "pkix-3-ca-ra" },                    /* PKIX-3 CA/RA */
    { 830, "netconf-ssh" },                     /* NETCONF over SSH */
    { 831, "netconf-beep" },                    /* NETCONF over BEEP */
    { 832, "netconfsoaphttp" },                 /* NETCONF for SOAP over HTTPS */
    { 833, "netconfsoapbeep" },                 /* NETCONF for SOAP over BEEP */
    { 847, "dhcp-failover2" },                  /* dhcp-failover 2 */
    { 848, "gdoi" },                            /* GDOI */
    { 853, "domain-s" },                        /* DNS query-response protocol run over TLS */
    { 854, "dlep" },                            /* Dynamic Link Exchange Protocol (DLEP) */
    { 860, "iscsi" },                           /* iSCSI */
    { 873, "rsync" },
    { 886, "iclcnet-locate" },                  /* ICL coNETion locate server */
    { 887, "iclcnet-svinfo" },                  /* ICL coNETion server info */
    { 888, "accessbuilder" },                   /* AccessBuilder */
    { 900, "omginitialrefs" },                  /* OMG Initial Refs */
    { 901, "smpnameres" },                      /* SMPNAMERES */
    { 902, "ideafarm-door" },                   /* self documenting Telnet Door */
    { 903, "ideafarm-panic" },                  /* self documenting Telnet Panic Door */
    { 910, "kink" },                            /* Kerberized Internet Negotiation of Keys (KINK) */
    { 911, "xact-backup" },
    { 912, "apex-mesh" },                       /* APEX relay-relay service */
    { 913, "apex-edge" },                       /* APEX endpoint-relay service */
    { 989, "ftps-data" },                       /* ftp protocol, data, over TLS/SSL */
    { 990, "ftps" },                            /* ftp protocol, control, over TLS/SSL */
    { 991, "nas" },                             /* Netnews Administration System */
    { 992, "telnets" },                         /* telnet protocol over TLS/SSL */
    { 995, "pop3s" },                           /* POP3 over TLS protocol */
    { 996, "vsinet" },
    { 997, "maitrd" },
    { 1000, "cadlock2" },
    { 1010, "surf" },
    { 1021, "exp1" },                           /* RFC3692-style Experiment 1 */
    { 1022, "exp2" },                           /* RFC3692-style Experiment 2 */
    { 1025, "blackjack" },                      /* network blackjack */
    { 1026, "cap" },                            /* Calendar Access Protocol */
    { 1029, "solid-mux" },                      /* Solid Mux Server */
    { 1033, "netinfo-local" },                  /* local netinfo port */
    { 1034, "activesync" },                     /* ActiveSync Notifications */
    { 1035, "mxxrlogin" },                      /* MX-XR RPC */
    { 1036, "nsstp" },                          /* Nebula Secure Segment Transfer Protocol */
    { 1037, "ams" },                            /* AMS */
    { 1038, "mtqp" },                           /* Message Tracking Query Protocol */
    { 1039, "sbl" },                            /* Streamlined Blackhole */
    { 1040, "netarx" },                         /* Netarx Netcare */
    { 1041, "danf-ak2" },                       /* AK2 Product */
    { 1042, "afrog" },                          /* Subnet Roaming */
    { 1043, "boinc-client" },                   /* BOINC Client Control */
    { 1044, "dcutility" },                      /* Dev Consortium Utility */
    { 1045, "fpitp" },                          /* Fingerprint Image Transfer Protocol */
    { 1046, "wfremotertm" },                    /* WebFilter Remote Monitor */
    { 1047, "neod1" },                          /* Sun's NEO Object Request Broker */
    { 1048, "neod2" },                          /* Sun's NEO Object Request Broker */
    { 1049, "td-postman" },                     /* Tobit David Postman VPMN */
    { 1050, "cma" },                            /* CORBA Management Agent */
    { 1051, "optima-vnet" },                    /* Optima VNET */
    { 1052, "ddt" },                            /* Dynamic DNS Tools */
    { 1053, "remote-as" },                      /* Remote Assistant (RA) */
    { 1054, "brvread" },                        /* BRVREAD */
    { 1055, "ansyslmd" },                       /* ANSYS - License Manager */
    { 1056, "vfo" },                            /* VFO */
    { 1057, "startron" },                       /* STARTRON */
    { 1058, "nim" },
    { 1059, "nimreg" },
    { 1060, "polestar" },                       /* POLESTAR */
    { 1061, "kiosk" },                          /* KIOSK */
    { 1062, "veracity" },                       /* Veracity */
    { 1063, "kyoceranetdev" },                  /* KyoceraNetDev */
    { 1064, "jstel" },                          /* JSTEL */
    { 1065, "syscomlan" },                      /* SYSCOMLAN */
    { 1066, "fpo-fns" },                        /* FPO-FNS */
    { 1067, "instl-boots" },                    /* Installation Bootstrap Proto. Serv. */
    { 1068, "instl-bootc" },                    /* Installation Bootstrap Proto. Cli. */
    { 1069, "cognex-insight" },                 /* COGNEX-INSIGHT */
    { 1070, "gmrupdateserv" },                  /* GMRUpdateSERV */
    { 1071, "bsquare-voip" },                   /* BSQUARE-VOIP */
    { 1072, "cardax" },                         /* CARDAX */
    { 1073, "bridgecontrol" },                  /* Bridge Control */
    { 1074, "warmspotMgmt" },                   /* Warmspot Management Protocol */
    { 1075, "rdrmshc" },                        /* RDRMSHC */
    { 1076, "dab-sti-c" },                      /* DAB STI-C */
    { 1077, "imgames" },                        /* IMGames */
    { 1078, "avocent-proxy" },                  /* Avocent Proxy Protocol */
    { 1079, "asprovatalk" },                    /* ASPROVATalk */
    { 1080, "socks" },                          /* Socks */
    { 1081, "pvuniwien" },                      /* PVUNIWIEN */
    { 1082, "amt-esd-prot" },                   /* AMT-ESD-PROT */
    { 1083, "ansoft-lm-1" },                    /* Anasoft License Manager */
    { 1084, "ansoft-lm-2" },                    /* Anasoft License Manager */
    { 1085, "webobjects" },                     /* Web Objects */
    { 1086, "cplscrambler-lg" },                /* CPL Scrambler Logging */
    { 1087, "cplscrambler-in" },                /* CPL Scrambler Internal */
    { 1088, "cplscrambler-al" },                /* CPL Scrambler Alarm Log */
    { 1089, "ff-annunc" },                      /* FF Annunciation */
    { 1090, "ff-fms" },                         /* FF Fieldbus Message Specification */
    { 1091, "ff-sm" },                          /* FF System Management */
    { 1092, "obrpd" },                          /* Open Business Reporting Protocol */
    { 1093, "proofd" },                         /* PROOFD */
    { 1094, "rootd" },                          /* ROOTD */
    { 1095, "nicelink" },                       /* NICELink */
    { 1096, "cnrprotocol" },                    /* Common Name Resolution Protocol */
    { 1097, "sunclustermgr" },                  /* Sun Cluster Manager */
    { 1098, "rmiactivation" },                  /* RMI Activation */
    { 1099, "rmiregistry" },                    /* RMI Registry */
    { 1100, "mctp" },                           /* MCTP */
    { 1101, "pt2-discover" },                   /* PT2-DISCOVER */
    { 1102, "adobeserver-1" },                  /* ADOBE SERVER 1 */
    { 1103, "adobeserver-2" },                  /* ADOBE SERVER 2 */
    { 1104, "xrl" },                            /* XRL */
    { 1105, "ftranhc" },                        /* FTRANHC */
    { 1106, "isoipsigport-1" },                 /* ISOIPSIGPORT-1 */
    { 1107, "isoipsigport-2" },                 /* ISOIPSIGPORT-2 */
    { 1108, "ratio-adp" },
    { 1111, "lmsocialserver" },                 /* LM Social Server */
    { 1112, "icp" },                            /* Intelligent Communication Protocol */
    { 1113, "ltp-deepspace" },                  /* Licklider Transmission Protocol */
    { 1114, "mini-sql" },                       /* Mini SQL */
    { 1115, "ardus-trns" },                     /* ARDUS Transfer */
    { 1116, "ardus-cntl" },                     /* ARDUS Control */
    { 1117, "ardus-mtrns" },                    /* ARDUS Multicast Transfer */
    { 1118, "sacred" },                         /* SACRED */
    { 1119, "bnetgame" },                       /* Battle.net Chat/Game Protocol */
    { 1120, "bnetfile" },                       /* Battle.net File Transfer Protocol */
    { 1121, "rmpp" },                           /* Datalode RMPP */
    { 1122, "availant-mgr" },
    { 1123, "murray" },                         /* Murray */
    { 1124, "hpvmmcontrol" },                   /* HP VMM Control */
    { 1125, "hpvmmagent" },                     /* HP VMM Agent */
    { 1126, "hpvmmdata" },                      /* HP VMM Agent */
    { 1127, "kwdb-commn" },                     /* KWDB Remote Communication */
    { 1128, "saphostctrl" },                    /* SAPHostControl over SOAP/HTTP */
    { 1129, "saphostctrls" },                   /* SAPHostControl over SOAP/HTTPS */
    { 1130, "casp" },                           /* CAC App Service Protocol */
    { 1131, "caspssl" },                        /* CAC App Service Protocol Encripted */
    { 1132, "kvm-via-ip" },                     /* KVM-via-IP Management Service */
    { 1133, "dfn" },                            /* Data Flow Network */
    { 1134, "aplx" },                           /* MicroAPL APLX */
    { 1135, "omnivision" },                     /* OmniVision Communication Service */
    { 1136, "hhb-gateway" },                    /* HHB Gateway Control */
    { 1137, "trim" },                           /* TRIM Workgroup Service */
    { 1138, "encrypted-admin" },                /* encrypted admin requests */
    { 1139, "evm" },                            /* Enterprise Virtual Manager */
    { 1140, "autonoc" },                        /* AutoNOC Network Operations Protocol */
    { 1141, "mxomss" },                         /* User Message Service */
    { 1142, "edtools" },                        /* User Discovery Service */
    { 1143, "imyx" },                           /* Infomatryx Exchange */
    { 1144, "fuscript" },                       /* Fusion Script */
    { 1145, "x9-icue" },                        /* X9 iCue Show Control */
    { 1146, "audit-transfer" },
    { 1147, "capioverlan" },                    /* CAPIoverLAN */
    { 1148, "elfiq-repl" },                     /* Elfiq Replication Service */
    { 1149, "bvtsonar" },                       /* BlueView Sonar Service */
    { 1150, "blaze" },                          /* Blaze File Server */
    { 1151, "unizensus" },                      /* Unizensus Login Server */
    { 1152, "winpoplanmess" },                  /* Winpopup LAN Messenger */
    { 1153, "c1222-acse" },                     /* ANSI C12.22 Port */
    { 1154, "resacommunity" },                  /* Community Service */
    { 1155, "nfa" },                            /* Network File Access */
    { 1156, "iascontrol-oms" },                 /* iasControl OMS */
    { 1157, "iascontrol" },                     /* Oracle iASControl */
    { 1158, "dbcontrol-oms" },                  /* dbControl OMS */
    { 1159, "oracle-oms" },                     /* Oracle OMS */
    { 1160, "olsv" },                           /* DB Lite Mult-User Server */
    { 1161, "health-polling" },                 /* Health Polling */
    { 1162, "health-trap" },                    /* Health Trap */
    { 1163, "sddp" },                           /* SmartDialer Data Protocol */
    { 1164, "qsm-proxy" },                      /* QSM Proxy Service */
    { 1165, "qsm-gui" },                        /* QSM GUI Service */
    { 1166, "qsm-remote" },                     /* QSM RemoteExec */
    { 1167, "cisco-ipsla" },                    /* Cisco IP SLAs Control Protocol */
    { 1168, "vchat" },                          /* VChat Conference Service */
    { 1169, "tripwire" },                       /* TRIPWIRE */
    { 1170, "atc-lm" },                         /* AT+C License Manager */
    { 1171, "atc-appserver" },                  /* AT+C FmiApplicationServer */
    { 1172, "dnap" },                           /* DNA Protocol */
    { 1173, "d-cinema-rrp" },                   /* D-Cinema Request-Response */
    { 1174, "fnet-remote-ui" },                 /* FlashNet Remote Admin */
    { 1175, "dossier" },                        /* Dossier Server */
    { 1176, "indigo-server" },                  /* Indigo Home Server */
    { 1177, "dkmessenger" },                    /* DKMessenger Protocol */
    { 1178, "sgi-storman" },                    /* SGI Storage Manager */
    { 1179, "b2n" },                            /* Backup To Neighbor */
    { 1180, "mc-client" },                      /* Millicent Client Proxy */
    { 1181, "3comnetman" },                     /* 3Com Net Management */
    { 1183, "llsurfup-http" },                  /* LL Surfup HTTP */
    { 1184, "llsurfup-https" },                 /* LL Surfup HTTPS */
    { 1185, "catchpole" },                      /* Catchpole port */
    { 1186, "mysql-cluster" },                  /* MySQL Cluster Manager */
    { 1187, "alias" },                          /* Alias Service */
    { 1188, "hp-webadmin" },                    /* HP Web Admin */
    { 1189, "unet" },                           /* Unet Connection */
    { 1190, "commlinx-avl" },                   /* CommLinx GPS / AVL System */
    { 1191, "gpfs" },                           /* General Parallel File System */
    { 1192, "caids-sensor" },                   /* caids sensors channel */
    { 1193, "fiveacross" },                     /* Five Across Server */
    { 1194, "openvpn" },                        /* OpenVPN */
    { 1195, "rsf-1" },                          /* RSF-1 clustering */
    { 1196, "netmagic" },                       /* Network Magic */
    { 1197, "carrius-rshell" },                 /* Carrius Remote Access */
    { 1198, "cajo-discovery" },                 /* cajo reference discovery */
    { 1199, "dmidi" },                          /* DMIDI */
    { 1200, "scol" },                           /* SCOL */
    { 1201, "nucleus-sand" },                   /* Nucleus Sand Database Server */
    { 1202, "caiccipc" },
    { 1203, "ssslic-mgr" },                     /* License Validation */
    { 1204, "ssslog-mgr" },                     /* Log Request Listener */
    { 1205, "accord-mgc" },                     /* Accord-MGC */
    { 1206, "anthony-data" },                   /* Anthony Data */
    { 1207, "metasage" },                       /* MetaSage */
    { 1208, "seagull-ais" },                    /* SEAGULL AIS */
    { 1209, "ipcd3" },                          /* IPCD3 */
    { 1210, "eoss" },                           /* EOSS */
    { 1211, "groove-dpp" },                     /* Groove DPP */
    { 1212, "lupa" },
    { 1213, "mpc-lifenet" },                    /* Medtronic/Physio-Control LIFENET */
    { 1214, "kazaa" },                          /* KAZAA */
    { 1215, "scanstat-1" },                     /* scanSTAT 1.0 */
    { 1216, "etebac5" },                        /* ETEBAC 5 */
    { 1217, "hpss-ndapi" },                     /* HPSS NonDCE Gateway */
    { 1218, "aeroflight-ads" },                 /* AeroFlight-ADs */
    { 1219, "aeroflight-ret" },                 /* AeroFlight-Ret */
    { 1220, "qt-serveradmin" },                 /* QT SERVER ADMIN */
    { 1221, "sweetware-apps" },                 /* SweetWARE Apps */
    { 1222, "nerv" },                           /* SNI R&D network */
    { 1223, "tgp" },                            /* TrulyGlobal Protocol */
    { 1224, "vpnz" },                           /* VPNz */
    { 1225, "slinkysearch" },                   /* SLINKYSEARCH */
    { 1226, "stgxfws" },                        /* STGXFWS */
    { 1227, "dns2go" },                         /* DNS2Go */
    { 1228, "florence" },                       /* FLORENCE */
    { 1229, "zented" },                         /* ZENworks Tiered Electronic Distribution */
    { 1230, "periscope" },                      /* Periscope */
    { 1231, "menandmice-lpm" },
    { 1232, "first-defense" },                  /* Remote systems monitoring */
    { 1233, "univ-appserver" },                 /* Universal App Server */
    { 1234, "search-agent" },                   /* Infoseek Search Agent */
    { 1235, "mosaicsyssvc1" },
    { 1236, "bvcontrol" },
    { 1237, "tsdos390" },
    { 1238, "hacl-qs" },
    { 1239, "nmsd" },                           /* NMSD */
    { 1240, "instantia" },                      /* Instantia */
    { 1241, "nessus" },
    { 1242, "nmasoverip" },                     /* NMAS over IP */
    { 1243, "serialgateway" },                  /* SerialGateway */
    { 1244, "isbconference1" },
    { 1245, "isbconference2" },
    { 1246, "payrouter" },
    { 1247, "visionpyramid" },                  /* VisionPyramid */
    { 1248, "hermes" },
    { 1249, "mesavistaco" },                    /* Mesa Vista Co */
    { 1250, "swldy-sias" },
    { 1251, "servergraph" },
    { 1252, "bspne-pcc" },
    { 1253, "q55-pcc" },
    { 1254, "de-noc" },
    { 1255, "de-cache-query" },
    { 1256, "de-server" },
    { 1257, "shockwave2" },                     /* Shockwave 2 */
    { 1258, "opennl" },                         /* Open Network Library */
    { 1259, "opennl-voice" },                   /* Open Network Library Voice */
    { 1260, "ibm-ssd" },
    { 1261, "mpshrsv" },
    { 1262, "qnts-orb" },                       /* QNTS-ORB */
    { 1263, "dka" },
    { 1264, "prat" },                           /* PRAT */
    { 1265, "dssiapi" },                        /* DSSIAPI */
    { 1266, "dellpwrappks" },                   /* DELLPWRAPPKS */
    { 1267, "epc" },                            /* eTrust Policy Compliance */
    { 1268, "propel-msgsys" },                  /* PROPEL-MSGSYS */
    { 1269, "watilapp" },                       /* WATiLaPP */
    { 1270, "opsmgr" },                         /* Microsoft Operations Manager */
    { 1271, "excw" },                           /* eXcW */
    { 1272, "cspmlockmgr" },                    /* CSPMLockMgr */
    { 1273, "emc-gateway" },                    /* EMC-Gateway */
    { 1274, "t1distproc" },
    { 1275, "ivcollector" },
    { 1277, "miva-mqs" },                       /* mqs */
    { 1278, "dellwebadmin-1" },                 /* Dell Web Admin 1 */
    { 1279, "dellwebadmin-2" },                 /* Dell Web Admin 2 */
    { 1280, "pictrography" },                   /* Pictrography */
    { 1281, "healthd" },
    { 1282, "emperion" },                       /* Emperion */
    { 1283, "productinfo" },                    /* Product Information */
    { 1284, "iee-qfx" },                        /* IEE-QFX */
    { 1285, "neoiface" },
    { 1286, "netuitive" },
    { 1287, "routematch" },                     /* RouteMatch Com */
    { 1288, "navbuddy" },                       /* NavBuddy */
    { 1289, "jwalkserver" },                    /* JWalkServer */
    { 1290, "winjaserver" },                    /* WinJaServer */
    { 1291, "seagulllms" },                     /* SEAGULLLMS */
    { 1292, "dsdn" },
    { 1293, "pkt-krb-ipsec" },                  /* PKT-KRB-IPSec */
    { 1294, "cmmdriver" },                      /* CMMdriver */
    { 1295, "ehtp" },                           /* End-by-Hop Transmission Protocol */
    { 1296, "dproxy" },
    { 1297, "sdproxy" },
    { 1298, "lpcp" },
    { 1299, "hp-sci" },
    { 1300, "h323hostcallsc" },                 /* H.323 Secure Call Control Signalling */
    { 1303, "sftsrv" },
    { 1304, "boomerang" },                      /* Boomerang */
    { 1305, "pe-mike" },
    { 1306, "re-conn-proto" },                  /* RE-Conn-Proto */
    { 1307, "pacmand" },                        /* Pacmand */
    { 1308, "odsi" },                           /* Optical Domain Service Interconnect (ODSI) */
    { 1309, "jtag-server" },                    /* JTAG server */
    { 1310, "husky" },                          /* Husky */
    { 1311, "rxmon" },                          /* RxMon */
    { 1312, "sti-envision" },                   /* STI Envision */
    { 1313, "bmc-patroldb" },                   /* BMC_PATROLDB */
    { 1314, "pdps" },                           /* Photoscript Distributed Printing System */
    { 1315, "els" },                            /* E.L.S., Event Listener Service */
    { 1316, "exbit-escp" },                     /* Exbit-ESCP */
    { 1317, "vrts-ipcserver" },
    { 1318, "krb5gatekeeper" },
    { 1319, "amx-icsp" },                       /* AMX-ICSP */
    { 1320, "amx-axbnet" },                     /* AMX-AXBNET */
    { 1321, "pip" },                            /* PIP */
    { 1322, "novation" },                       /* Novation */
    { 1323, "brcd" },
    { 1324, "delta-mcp" },
    { 1325, "dx-instrument" },                  /* DX-Instrument */
    { 1326, "wimsic" },                         /* WIMSIC */
    { 1327, "ultrex" },                         /* Ultrex */
    { 1328, "ewall" },                          /* EWALL */
    { 1329, "netdb-export" },
    { 1330, "streetperfect" },                  /* StreetPerfect */
    { 1331, "intersan" },
    { 1332, "pcia-rxp-b" },                     /* PCIA RXP-B */
    { 1333, "passwrd-policy" },                 /* Password Policy */
    { 1334, "writesrv" },
    { 1335, "digital-notary" },                 /* Digital Notary Protocol */
    { 1336, "ischat" },                         /* Instant Service Chat */
    { 1337, "menandmice-dns" },                 /* menandmice DNS */
    { 1338, "wmc-log-svc" },                    /* WMC-log-svr */
    { 1339, "kjtsiteserver" },
    { 1340, "naap" },                           /* NAAP */
    { 1341, "qubes" },                          /* QuBES */
    { 1342, "esbroker" },                       /* ESBroker */
    { 1343, "re101" },
    { 1344, "icap" },                           /* ICAP */
    { 1345, "vpjp" },                           /* VPJP */
    { 1346, "alta-ana-lm" },                    /* Alta Analytics License Manager */
    { 1347, "bbn-mmc" },                        /* multi media conferencing */
    { 1348, "bbn-mmx" },                        /* multi media conferencing */
    { 1349, "sbook" },                          /* Registration Network Protocol */
    { 1350, "editbench" },                      /* Registration Network Protocol */
    { 1351, "equationbuilder" },                /* Digital Tool Works (MIT) */
    { 1352, "lotusnote" },                      /* Lotus Note */
    { 1353, "relief" },                         /* Relief Consulting */
    { 1354, "XSIP-network" },                   /* Five Across XSIP Network */
    { 1355, "intuitive-edge" },                 /* Intuitive Edge */
    { 1356, "cuillamartin" },                   /* CuillaMartin Company */
    { 1357, "pegboard" },                       /* Electronic PegBoard */
    { 1358, "connlcli" },                       /* CONNLCLI */
    { 1359, "ftsrv" },                          /* FTSRV */
    { 1360, "mimer" },                          /* MIMER */
    { 1361, "linx" },                           /* LinX */
    { 1362, "timeflies" },                      /* TimeFlies */
    { 1363, "ndm-requester" },                  /* Network DataMover Requester */
    { 1364, "ndm-server" },                     /* Network DataMover Server */
    { 1365, "adapt-sna" },                      /* Network Software Associates */
    { 1366, "netware-csp" },                    /* Novell NetWare Comm Service Platform */
    { 1367, "dcs" },                            /* DCS */
    { 1368, "screencast" },                     /* ScreenCast */
    { 1369, "gv-us" },                          /* GlobalView to Unix Shell */
    { 1370, "us-gv" },                          /* Unix Shell to GlobalView */
    { 1371, "fc-cli" },                         /* Fujitsu Config Protocol */
    { 1372, "fc-ser" },                         /* Fujitsu Config Protocol */
    { 1373, "chromagrafx" },                    /* Chromagrafx */
    { 1374, "molly" },                          /* EPI Software Systems */
    { 1375, "bytex" },                          /* Bytex */
    { 1376, "ibm-pps" },                        /* IBM Person to Person Software */
    { 1377, "cichlid" },                        /* Cichlid License Manager */
    { 1378, "elan" },                           /* Elan License Manager */
    { 1379, "dbreporter" },                     /* Integrity Solutions */
    { 1380, "telesis-licman" },                 /* Telesis Network License Manager */
    { 1381, "apple-licman" },                   /* Apple Network License Manager */
    { 1382, "udt-os" },                         /* udt_os */
    { 1383, "gwha" },                           /* GW Hannaway Network License Manager */
    { 1384, "os-licman" },                      /* Objective Solutions License Manager */
    { 1385, "atex-elmd" },                      /* Atex Publishing License Manager */
    { 1386, "checksum" },                       /* CheckSum License Manager */
    { 1387, "cadsi-lm" },                       /* Computer Aided Design Software Inc LM */
    { 1388, "objective-dbc" },                  /* Objective Solutions DataBase Cache */
    { 1389, "iclpv-dm" },                       /* Document Manager */
    { 1390, "iclpv-sc" },                       /* Storage Controller */
    { 1391, "iclpv-sas" },                      /* Storage Access Server */
    { 1392, "iclpv-pm" },                       /* Print Manager */
    { 1393, "iclpv-nls" },                      /* Network Log Server */
    { 1394, "iclpv-nlc" },                      /* Network Log Client */
    { 1395, "iclpv-wsm" },                      /* PC Workstation Manager software */
    { 1396, "dvl-activemail" },                 /* DVL Active Mail */
    { 1397, "audio-activmail" },                /* Audio Active Mail */
    { 1398, "video-activmail" },                /* Video Active Mail */
    { 1399, "cadkey-licman" },                  /* Cadkey License Manager */
    { 1400, "cadkey-tablet" },                  /* Cadkey Tablet Daemon */
    { 1401, "goldleaf-licman" },                /* Goldleaf License Manager */
    { 1402, "prm-sm-np" },                      /* Prospero Resource Manager */
    { 1403, "prm-nm-np" },                      /* Prospero Resource Manager */
    { 1404, "igi-lm" },                         /* Infinite Graphics License Manager */
    { 1405, "ibm-res" },                        /* IBM Remote Execution Starter */
    { 1406, "netlabs-lm" },                     /* NetLabs License Manager */
    { 1408, "sophia-lm" },                      /* Sophia License Manager */
    { 1409, "here-lm" },                        /* Here License Manager */
    { 1410, "hiq" },                            /* HiQ License Manager */
    { 1411, "af" },                             /* AudioFile */
    { 1412, "innosys" },                        /* InnoSys */
    { 1413, "innosys-acl" },                    /* Innosys-ACL */
    { 1414, "ibm-mqseries" },                   /* IBM MQSeries */
    { 1415, "dbstar" },                         /* DBStar */
    { 1416, "novell-lu6-2" },                   /* Novell LU6.2 */
    { 1417, "timbuktu-srv1" },                  /* Timbuktu Service 1 Port */
    { 1418, "timbuktu-srv2" },                  /* Timbuktu Service 2 Port */
    { 1419, "timbuktu-srv3" },                  /* Timbuktu Service 3 Port */
    { 1420, "timbuktu-srv4" },                  /* Timbuktu Service 4 Port */
    { 1421, "gandalf-lm" },                     /* Gandalf License Manager */
    { 1422, "autodesk-lm" },                    /* Autodesk License Manager */
    { 1423, "essbase" },                        /* Essbase Arbor Software */
    { 1424, "hybrid" },                         /* Hybrid Encryption Protocol */
    { 1425, "zion-lm" },                        /* Zion Software License Manager */
    { 1426, "sais" },                           /* Satellite-data Acquisition System 1 */
    { 1427, "mloadd" },                         /* mloadd monitoring tool */
    { 1428, "informatik-lm" },                  /* Informatik License Manager */
    { 1429, "nms" },                            /* Hypercom NMS */
    { 1430, "tpdu" },                           /* Hypercom TPDU */
    { 1431, "rgtp" },                           /* Reverse Gossip Transport */
    { 1432, "blueberry-lm" },                   /* Blueberry Software License Manager */
    { 1433, "ms-sql-s" },                       /* Microsoft-SQL-Server */
    { 1434, "ms-sql-m" },                       /* Microsoft-SQL-Monitor */
    { 1435, "ibm-cics" },                       /* IBM CICS */
    { 1436, "saism" },                          /* Satellite-data Acquisition System 2 */
    { 1437, "tabula" },                         /* Tabula */
    { 1438, "eicon-server" },                   /* Eicon Security Agent/Server */
    { 1439, "eicon-x25" },                      /* Eicon X25/SNA Gateway */
    { 1440, "eicon-slp" },                      /* Eicon Service Location Protocol */
    { 1441, "cadis-1" },                        /* Cadis License Management */
    { 1442, "cadis-2" },                        /* Cadis License Management */
    { 1443, "ies-lm" },                         /* Integrated Engineering Software */
    { 1444, "marcam-lm" },                      /* Marcam License Management */
    { 1445, "proxima-lm" },                     /* Proxima License Manager */
    { 1446, "ora-lm" },                         /* Optical Research Associates License Manager */
    { 1447, "apri-lm" },                        /* Applied Parallel Research LM */
    { 1448, "oc-lm" },                          /* OpenConnect License Manager */
    { 1449, "peport" },                         /* PEport */
    { 1450, "dwf" },                            /* Tandem Distributed Workbench Facility */
    { 1451, "infoman" },                        /* IBM Information Management */
    { 1452, "gtegsc-lm" },                      /* GTE Government Systems License Man */
    { 1453, "genie-lm" },                       /* Genie License Manager */
    { 1454, "interhdl-elmd" },                  /* interHDL License Manager */
    { 1455, "esl-lm" },                         /* ESL License Manager */
    { 1456, "dca" },                            /* DCA */
    { 1457, "valisys-lm" },                     /* Valisys License Manager */
    { 1458, "nrcabq-lm" },                      /* Nichols Research Corp. */
    { 1459, "proshare1" },                      /* Proshare Notebook Application */
    { 1460, "proshare2" },                      /* Proshare Notebook Application */
    { 1461, "ibm-wrless-lan" },                 /* IBM Wireless LAN */
    { 1462, "world-lm" },                       /* World License Manager */
    { 1463, "nucleus" },                        /* Nucleus */
    { 1464, "msl-lmd" },                        /* MSL License Manager */
    { 1465, "pipes" },                          /* Pipes Platform */
    { 1466, "oceansoft-lm" },                   /* Ocean Software License Manager */
    { 1467, "csdmbase" },                       /* CSDMBASE */
    { 1468, "csdm" },                           /* CSDM */
    { 1469, "aal-lm" },                         /* Active Analysis Limited License Manager */
    { 1470, "uaiact" },                         /* Universal Analytics */
    { 1471, "csdmbase" },
    { 1472, "csdm" },
    { 1473, "openmath" },                       /* OpenMath */
    { 1474, "telefinder" },                     /* Telefinder */
    { 1475, "taligent-lm" },                    /* Taligent License Manager */
    { 1476, "clvm-cfg" },
    { 1477, "ms-sna-server" },
    { 1478, "ms-sna-base" },
    { 1479, "dberegister" },
    { 1480, "pacerforum" },                     /* PacerForum */
    { 1481, "airs" },                           /* AIRS */
    { 1482, "miteksys-lm" },                    /* Miteksys License Manager */
    { 1483, "afs" },                            /* AFS License Manager */
    { 1484, "confluent" },                      /* Confluent License Manager */
    { 1485, "lansource" },                      /* LANSource */
    { 1486, "nms-topo-serv" },                  /* nms_topo_serv */
    { 1487, "localinfosrvr" },                  /* LocalInfoSrvr */
    { 1488, "docstor" },                        /* DocStor */
    { 1489, "dmdocbroker" },
    { 1490, "insitu-conf" },
    { 1492, "stone-design-1" },
    { 1493, "netmap-lm" },                      /* netmap_lm */
    { 1494, "ica" },
    { 1495, "cvc" },
    { 1496, "liberty-lm" },
    { 1497, "rfx-lm" },
    { 1498, "sybase-sqlany" },                  /* Sybase SQL Any */
    { 1499, "fhc" },                            /* Federico Heinz Consultora */
    { 1500, "vlsi-lm" },                        /* VLSI License Manager */
    { 1501, "saiscm" },                         /* Satellite-data Acquisition System 3 */
    { 1502, "shivadiscovery" },                 /* Shiva */
    { 1503, "imtc-mcs" },                       /* Databeam */
    { 1504, "evb-elm" },                        /* EVB Software Engineering License Manager */
    { 1505, "funkproxy" },                      /* Funk Software, Inc. */
    { 1506, "utcd" },                           /* Universal Time daemon (utcd) */
    { 1507, "symplex" },
    { 1508, "diagmond" },
    { 1509, "robcad-lm" },                      /* Robcad, Ltd. License Manager */
    { 1510, "mvx-lm" },                         /* Midland Valley Exploration Ltd. Lic. Man. */
    { 1511, "3l-l1" },
    { 1512, "wins" },                           /* Microsoft's Windows Internet Name Service */
    { 1513, "fujitsu-dtc" },                    /* Fujitsu Systems Business of America, Inc */
    { 1514, "fujitsu-dtcns" },                  /* Fujitsu Systems Business of America, Inc */
    { 1515, "ifor-protocol" },
    { 1516, "vpad" },                           /* Virtual Places Audio data */
    { 1517, "vpac" },                           /* Virtual Places Audio control */
    { 1518, "vpvd" },                           /* Virtual Places Video data */
    { 1519, "vpvc" },                           /* Virtual Places Video control */
    { 1520, "atm-zip-office" },
    { 1521, "ncube-lm" },                       /* nCube License Manager */
    { 1522, "ricardo-lm" },                     /* Ricardo North America License Manager */
    { 1523, "cichild-lm" },                     /* cichild */
    { 1524, "ingreslock" },                     /* ingres */
    { 1525, "orasrv" },                         /* oracle */
    { 1526, "pdap-np" },                        /* Prospero Data Access Prot non-priv */
    { 1527, "tlisrv" },                         /* oracle */
    { 1528, "norp" },                           /* Not Only a Routeing Protocol */
    { 1529, "coauthor" },                       /* oracle */
    { 1530, "rap-service" },
    { 1531, "rap-listen" },
    { 1532, "miroconnect" },
    { 1533, "virtual-places" },                 /* Virtual Places Software */
    { 1534, "micromuse-lm" },
    { 1535, "ampr-info" },
    { 1536, "ampr-inter" },
    { 1537, "sdsc-lm" },                        /* isi-lm */
    { 1538, "3ds-lm" },
    { 1539, "intellistor-lm" },                 /* Intellistor License Manager */
    { 1540, "rds" },
    { 1541, "rds2" },
    { 1542, "gridgen-elmd" },
    { 1543, "simba-cs" },
    { 1544, "aspeclmd" },
    { 1545, "vistium-share" },
    { 1546, "abbaccuray" },
    { 1547, "laplink" },
    { 1548, "axon-lm" },                        /* Axon License Manager */
    { 1550, "3m-image-lm" },                    /* Image Storage license manager 3M Company */
    { 1551, "hecmtl-db" },                      /* HECMTL-DB */
    { 1552, "pciarray" },
    { 1553, "sna-cs" },
    { 1554, "caci-lm" },                        /* CACI Products Company License Manager */
    { 1555, "livelan" },
    { 1556, "veritas-pbx" },                    /* VERITAS Private Branch Exchange */
    { 1557, "arbortext-lm" },                   /* ArborText License Manager */
    { 1558, "xingmpeg" },
    { 1559, "web2host" },
    { 1560, "asci-val" },                       /* ASCI-RemoteSHADOW */
    { 1561, "facilityview" },
    { 1562, "pconnectmgr" },
    { 1563, "cadabra-lm" },                     /* Cadabra License Manager */
    { 1564, "pay-per-view" },                   /* Pay-Per-View */
    { 1565, "winddlb" },                        /* WinDD */
    { 1566, "corelvideo" },                     /* CORELVIDEO */
    { 1567, "jlicelmd" },
    { 1568, "tsspmap" },
    { 1569, "ets" },
    { 1570, "orbixd" },
    { 1571, "rdb-dbs-disp" },                   /* Oracle Remote Data Base */
    { 1572, "chip-lm" },                        /* Chipcom License Manager */
    { 1573, "itscomm-ns" },
    { 1574, "mvel-lm" },
    { 1575, "oraclenames" },
    { 1576, "moldflow-lm" },                    /* Moldflow License Manager */
    { 1577, "hypercube-lm" },
    { 1578, "jacobus-lm" },                     /* Jacobus License Manager */
    { 1579, "ioc-sea-lm" },
    { 1581, "mil-2045-47001" },                 /* MIL-2045-47001 */
    { 1582, "msims" },                          /* MSIMS */
    { 1583, "simbaexpress" },
    { 1584, "tn-tl-fd2" },
    { 1585, "intv" },
    { 1586, "ibm-abtact" },
    { 1587, "pra-elmd" },                       /* pra_elmd */
    { 1588, "triquest-lm" },
    { 1589, "vqp" },                            /* VQP */
    { 1590, "gemini-lm" },
    { 1591, "ncpm-pm" },
    { 1592, "commonspace" },
    { 1593, "mainsoft-lm" },
    { 1594, "sixtrak" },
    { 1595, "radio" },
    { 1597, "orbplus-iiop" },
    { 1598, "picknfs" },
    { 1599, "simbaservices" },
    { 1600, "issd" },
    { 1601, "aas" },
    { 1602, "inspect" },
    { 1603, "picodbc" },                        /* pickodbc */
    { 1604, "icabrowser" },
    { 1605, "slp" },                            /* Salutation Manager (Salutation Protocol) */
    { 1606, "slm-api" },                        /* Salutation Manager (SLM-API) */
    { 1607, "stt" },
    { 1608, "smart-lm" },                       /* Smart Corp. License Manager */
    { 1609, "isysg-lm" },
    { 1610, "taurus-wh" },
    { 1611, "ill" },                            /* Inter Library Loan */
    { 1612, "netbill-trans" },                  /* NetBill Transaction Server */
    { 1613, "netbill-keyrep" },                 /* NetBill Key Repository */
    { 1614, "netbill-cred" },                   /* NetBill Credential Server */
    { 1615, "netbill-auth" },                   /* NetBill Authorization Server */
    { 1616, "netbill-prod" },                   /* NetBill Product Server */
    { 1617, "nimrod-agent" },                   /* Nimrod Inter-Agent Communication */
    { 1618, "skytelnet" },
    { 1619, "xs-openstorage" },
    { 1620, "faxportwinport" },
    { 1621, "softdataphone" },
    { 1622, "ontime" },
    { 1623, "jaleosnd" },
    { 1624, "udp-sr-port" },
    { 1625, "svs-omagent" },
    { 1626, "shockwave" },                      /* Shockwave */
    { 1627, "t128-gateway" },                   /* T.128 Gateway */
    { 1628, "lontalk-norm" },                   /* LonTalk normal */
    { 1629, "lontalk-urgnt" },                  /* LonTalk urgent */
    { 1630, "oraclenet8cman" },                 /* Oracle Net8 Cman */
    { 1631, "visitview" },                      /* Visit view */
    { 1632, "pammratc" },                       /* PAMMRATC */
    { 1633, "pammrpc" },                        /* PAMMRPC */
    { 1634, "loaprobe" },                       /* Log On America Probe */
    { 1635, "edb-server1" },                    /* EDB Server 1 */
    { 1636, "isdc" },                           /* ISP shared public data control */
    { 1637, "islc" },                           /* ISP shared local data control */
    { 1638, "ismc" },                           /* ISP shared management control */
    { 1639, "cert-initiator" },
    { 1640, "cert-responder" },
    { 1641, "invision" },                       /* InVision */
    { 1642, "isis-am" },
    { 1643, "isis-ambc" },
    { 1644, "saiseh" },                         /* Satellite-data Acquisition System 4 */
    { 1645, "sightline" },                      /* SightLine */
    { 1646, "sa-msg-port" },
    { 1647, "rsap" },
    { 1648, "concurrent-lm" },
    { 1649, "kermit" },
    { 1650, "nkd" },                            /* nkdn */
    { 1651, "shiva-confsrvr" },                 /* shiva_confsrvr */
    { 1652, "xnmp" },
    { 1653, "alphatech-lm" },
    { 1654, "stargatealerts" },
    { 1655, "dec-mbadmin" },
    { 1656, "dec-mbadmin-h" },
    { 1657, "fujitsu-mmpdc" },
    { 1658, "sixnetudr" },
    { 1659, "sg-lm" },                          /* Silicon Grail License Manager */
    { 1660, "skip-mc-gikreq" },
    { 1661, "netview-aix-1" },
    { 1662, "netview-aix-2" },
    { 1663, "netview-aix-3" },
    { 1664, "netview-aix-4" },
    { 1665, "netview-aix-5" },
    { 1666, "netview-aix-6" },
    { 1667, "netview-aix-7" },
    { 1668, "netview-aix-8" },
    { 1669, "netview-aix-9" },
    { 1670, "netview-aix-10" },
    { 1671, "netview-aix-11" },
    { 1672, "netview-aix-12" },
    { 1673, "proshare-mc-1" },                  /* Intel Proshare Multicast */
    { 1674, "proshare-mc-2" },                  /* Intel Proshare Multicast */
    { 1675, "pdp" },                            /* Pacific Data Products */
    { 1677, "groupwise" },
    { 1678, "prolink" },
    { 1679, "darcorp-lm" },
    { 1680, "microcom-sbp" },
    { 1681, "sd-elmd" },
    { 1682, "lanyon-lantern" },
    { 1683, "ncpm-hip" },
    { 1684, "snaresecure" },                    /* SnareSecure */
    { 1685, "n2nremote" },
    { 1686, "cvmon" },
    { 1687, "nsjtp-ctrl" },
    { 1688, "nsjtp-data" },
    { 1689, "firefox" },
    { 1690, "ng-umds" },
    { 1691, "empire-empuma" },
    { 1692, "sstsys-lm" },
    { 1693, "rrirtr" },
    { 1694, "rrimwm" },
    { 1695, "rrilwm" },
    { 1696, "rrifmm" },
    { 1697, "rrisat" },
    { 1698, "rsvp-encap-1" },                   /* RSVP-ENCAPSULATION-1 */
    { 1699, "rsvp-encap-2" },                   /* RSVP-ENCAPSULATION-2 */
    { 1700, "mps-raft" },
    { 1701, "l2f" },
    { 1702, "deskshare" },
    { 1703, "hb-engine" },
    { 1704, "bcs-broker" },
    { 1705, "slingshot" },
    { 1706, "jetform" },
    { 1707, "vdmplay" },
    { 1708, "gat-lmd" },
    { 1709, "centra" },
    { 1710, "impera" },
    { 1711, "pptconference" },
    { 1712, "registrar" },                      /* resource monitoring service */
    { 1713, "conferencetalk" },                 /* ConferenceTalk */
    { 1714, "sesi-lm" },
    { 1715, "houdini-lm" },
    { 1716, "xmsg" },
    { 1717, "fj-hdnet" },
    { 1718, "h323gatedisc" },                   /* H.323 Multicast Gatekeeper Discover */
    { 1719, "h323gatestat" },                   /* H.323 Unicast Gatekeeper Signaling */
    { 1720, "h323hostcall" },                   /* H.323 Call Control Signalling */
    { 1721, "caicci" },
    { 1722, "hks-lm" },                         /* HKS License Manager */
    { 1723, "pptp" },
    { 1724, "csbphonemaster" },
    { 1725, "iden-ralp" },
    { 1726, "iberiagames" },                    /* IBERIAGAMES */
    { 1727, "winddx" },
    { 1728, "telindus" },                       /* TELINDUS */
    { 1729, "citynl" },                         /* CityNL License Management */
    { 1730, "roketz" },
    { 1731, "msiccp" },                         /* MSICCP */
    { 1732, "proxim" },
    { 1733, "siipat" },                         /* SIMS - SIIPAT Protocol for Alarm Transmission */
    { 1734, "cambertx-lm" },                    /* Camber Corporation License Management */
    { 1735, "privatechat" },                    /* PrivateChat */
    { 1736, "street-stream" },
    { 1737, "ultimad" },
    { 1738, "gamegen1" },                       /* GameGen1 */
    { 1739, "webaccess" },
    { 1740, "encore" },
    { 1741, "cisco-net-mgmt" },
    { 1742, "3Com-nsd" },
    { 1743, "cinegrfx-lm" },                    /* Cinema Graphics License Manager */
    { 1744, "ncpm-ft" },
    { 1745, "remote-winsock" },
    { 1746, "ftrapid-1" },
    { 1747, "ftrapid-2" },
    { 1748, "oracle-em1" },
    { 1749, "aspen-services" },
    { 1750, "sslp" },                           /* Simple Socket Library's PortMaster */
    { 1751, "swiftnet" },                       /* SwiftNet */
    { 1752, "lofr-lm" },                        /* Leap of Faith Research License Manager */
    { 1754, "oracle-em2" },
    { 1755, "ms-streaming" },
    { 1756, "capfast-lmd" },
    { 1757, "cnhrp" },
    { 1758, "tftp-mcast" },
    { 1759, "spss-lm" },                        /* SPSS License Manager */
    { 1760, "www-ldap-gw" },
    { 1761, "cft-0" },
    { 1762, "cft-1" },
    { 1763, "cft-2" },
    { 1764, "cft-3" },
    { 1765, "cft-4" },
    { 1766, "cft-5" },
    { 1767, "cft-6" },
    { 1768, "cft-7" },
    { 1769, "bmc-net-adm" },
    { 1770, "bmc-net-svc" },
    { 1771, "vaultbase" },
    { 1772, "essweb-gw" },                      /* EssWeb Gateway */
    { 1773, "kmscontrol" },                     /* KMSControl */
    { 1774, "global-dtserv" },
    { 1776, "femis" },                          /* Federal Emergency Management Information System */
    { 1777, "powerguardian" },
    { 1778, "prodigy-intrnet" },                /* prodigy-internet */
    { 1779, "pharmasoft" },
    { 1780, "dpkeyserv" },
    { 1781, "answersoft-lm" },
    { 1782, "hp-hcip" },
    { 1784, "finle-lm" },                       /* Finle License Manager */
    { 1785, "windlm" },                         /* Wind River Systems License Manager */
    { 1786, "funk-logger" },
    { 1787, "funk-license" },
    { 1788, "psmond" },
    { 1789, "hello" },
    { 1790, "nmsp" },                           /* Narrative Media Streaming Protocol */
    { 1791, "ea1" },                            /* EA1 */
    { 1792, "ibm-dt-2" },
    { 1793, "rsc-robot" },
    { 1794, "cera-bcm" },
    { 1795, "dpi-proxy" },
    { 1796, "vocaltec-admin" },                 /* Vocaltec Server Administration */
    { 1797, "uma" },                            /* UMA */
    { 1798, "etp" },                            /* Event Transfer Protocol */
    { 1799, "netrisk" },                        /* NETRISK */
    { 1800, "ansys-lm" },                       /* ANSYS-License manager */
    { 1801, "msmq" },                           /* Microsoft Message Que */
    { 1802, "concomp1" },                       /* ConComp1 */
    { 1803, "hp-hcip-gwy" },                    /* HP-HCIP-GWY */
    { 1804, "enl" },                            /* ENL */
    { 1805, "enl-name" },                       /* ENL-Name */
    { 1806, "musiconline" },                    /* Musiconline */
    { 1807, "fhsp" },                           /* Fujitsu Hot Standby Protocol */
    { 1808, "oracle-vp2" },                     /* Oracle-VP2 */
    { 1809, "oracle-vp1" },                     /* Oracle-VP1 */
    { 1810, "jerand-lm" },                      /* Jerand License Manager */
    { 1811, "scientia-sdb" },                   /* Scientia-SDB */
    { 1812, "radius" },                         /* RADIUS */
    { 1813, "radius-acct" },                    /* RADIUS Accounting */
    { 1814, "tdp-suite" },                      /* TDP Suite */
    { 1815, "mmpft" },                          /* MMPFT */
    { 1816, "harp" },                           /* HARP */
    { 1817, "rkb-oscs" },                       /* RKB-OSCS */
    { 1818, "etftp" },                          /* Enhanced Trivial File Transfer Protocol */
    { 1819, "plato-lm" },                       /* Plato License Manager */
    { 1820, "mcagent" },
    { 1821, "donnyworld" },
    { 1822, "es-elmd" },
    { 1823, "unisys-lm" },                      /* Unisys Natural Language License Manager */
    { 1824, "metrics-pas" },
    { 1825, "direcpc-video" },                  /* DirecPC Video */
    { 1826, "ardt" },                           /* ARDT */
    { 1827, "asi" },                            /* ASI */
    { 1828, "itm-mcell-u" },
    { 1829, "optika-emedia" },                  /* Optika eMedia */
    { 1830, "net8-cman" },                      /* Oracle Net8 CMan Admin */
    { 1831, "myrtle" },                         /* Myrtle */
    { 1832, "tht-treasure" },                   /* ThoughtTreasure */
    { 1833, "udpradio" },
    { 1834, "ardusuni" },                       /* ARDUS Unicast */
    { 1835, "ardusmul" },                       /* ARDUS Multicast */
    { 1836, "ste-smsc" },
    { 1837, "csoft1" },
    { 1838, "talnet" },                         /* TALNET */
    { 1839, "netopia-vo1" },
    { 1840, "netopia-vo2" },
    { 1841, "netopia-vo3" },
    { 1842, "netopia-vo4" },
    { 1843, "netopia-vo5" },
    { 1844, "direcpc-dll" },                    /* DirecPC-DLL */
    { 1845, "altalink" },
    { 1846, "tunstall-pnc" },                   /* Tunstall PNC */
    { 1847, "slp-notify" },                     /* SLP Notification */
    { 1848, "fjdocdist" },
    { 1849, "alpha-sms" },                      /* ALPHA-SMS */
    { 1850, "gsi" },                            /* GSI */
    { 1851, "ctcd" },
    { 1852, "virtual-time" },                   /* Virtual Time */
    { 1853, "vids-avtp" },                      /* VIDS-AVTP */
    { 1854, "buddy-draw" },                     /* Buddy Draw */
    { 1855, "fiorano-rtrsvc" },                 /* Fiorano RtrSvc */
    { 1856, "fiorano-msgsvc" },                 /* Fiorano MsgSvc */
    { 1857, "datacaptor" },                     /* DataCaptor */
    { 1858, "privateark" },                     /* PrivateArk */
    { 1859, "gammafetchsvr" },                  /* Gamma Fetcher Server */
    { 1860, "sunscalar-svc" },                  /* SunSCALAR Services */
    { 1861, "lecroy-vicp" },                    /* LeCroy VICP */
    { 1862, "mysql-cm-agent" },                 /* MySQL Cluster Manager Agent */
    { 1863, "msnp" },                           /* MSNP */
    { 1864, "paradym-31port" },                 /* Paradym 31 Port */
    { 1865, "entp" },                           /* ENTP */
    { 1866, "swrmi" },
    { 1867, "udrive" },                         /* UDRIVE */
    { 1868, "viziblebrowser" },                 /* VizibleBrowser */
    { 1869, "transact" },                       /* TransAct */
    { 1870, "sunscalar-dns" },                  /* SunSCALAR DNS Service */
    { 1871, "canocentral0" },                   /* Cano Central 0 */
    { 1872, "canocentral1" },                   /* Cano Central 1 */
    { 1873, "fjmpjps" },                        /* Fjmpjps */
    { 1874, "fjswapsnp" },                      /* Fjswapsnp */
    { 1875, "westell-stats" },
    { 1876, "ewcappsrv" },
    { 1877, "hp-webqosdb" },
    { 1878, "drmsmc" },
    { 1879, "nettgain-nms" },                   /* NettGain NMS */
    { 1880, "vsat-control" },                   /* Gilat VSAT Control */
    { 1881, "ibm-mqseries2" },                  /* IBM WebSphere MQ Everyplace */
    { 1882, "ecsqdmn" },                        /* CA eTrust Common Services */
    { 1883, "mqtt" },                           /* Message Queuing Telemetry Transport Protocol */
    { 1884, "idmaps" },                         /* Internet Distance Map Svc */
    { 1885, "vrtstrapserver" },                 /* Veritas Trap Server */
    { 1886, "leoip" },                          /* Leonardo over IP */
    { 1887, "filex-lport" },                    /* FileX Listening Port */
    { 1888, "ncconfig" },                       /* NC Config Port */
    { 1889, "unify-adapter" },                  /* Unify Web Adapter Service */
    { 1890, "wilkenlistener" },                 /* wilkenListener */
    { 1891, "childkey-notif" },                 /* ChildKey Notification */
    { 1892, "childkey-ctrl" },                  /* ChildKey Control */
    { 1893, "elad" },                           /* ELAD Protocol */
    { 1894, "o2server-port" },                  /* O2Server Port */
    { 1896, "b-novative-ls" },                  /* b-novative license server */
    { 1897, "metaagent" },                      /* MetaAgent */
    { 1898, "cymtec-port" },                    /* Cymtec secure management */
    { 1899, "mc2studios" },                     /* MC2Studios */
    { 1900, "ssdp" },                           /* SSDP */
    { 1901, "fjicl-tep-a" },                    /* Fujitsu ICL Terminal Emulator Program A */
    { 1902, "fjicl-tep-b" },                    /* Fujitsu ICL Terminal Emulator Program B */
    { 1903, "linkname" },                       /* Local Link Name Resolution */
    { 1904, "fjicl-tep-c" },                    /* Fujitsu ICL Terminal Emulator Program C */
    { 1905, "sugp" },                           /* Secure UP.Link Gateway Protocol */
    { 1906, "tpmd" },                           /* TPortMapperReq */
    { 1907, "intrastar" },                      /* IntraSTAR */
    { 1908, "dawn" },                           /* Dawn */
    { 1909, "global-wlink" },                   /* Global World Link */
    { 1910, "ultrabac" },                       /* UltraBac Software communications port */
    { 1911, "mtp" },                            /* Starlight Networks Multimedia Transport Protocol */
    { 1912, "rhp-iibp" },
    { 1913, "armadp" },
    { 1914, "elm-momentum" },                   /* Elm-Momentum */
    { 1915, "facelink" },                       /* FACELINK */
    { 1916, "persona" },                        /* Persoft Persona */
    { 1917, "noagent" },                        /* nOAgent */
    { 1918, "can-nds" },                        /* IBM Tivole Directory Service - NDS */
    { 1919, "can-dch" },                        /* IBM Tivoli Directory Service - DCH */
    { 1920, "can-ferret" },                     /* IBM Tivoli Directory Service - FERRET */
    { 1921, "noadmin" },                        /* NoAdmin */
    { 1922, "tapestry" },                       /* Tapestry */
    { 1923, "spice" },                          /* SPICE */
    { 1924, "xiip" },                           /* XIIP */
    { 1925, "discovery-port" },                 /* Surrogate Discovery Port */
    { 1926, "egs" },                            /* Evolution Game Server */
    { 1927, "videte-cipc" },                    /* Videte CIPC Port */
    { 1928, "emsd-port" },                      /* Expnd Maui Srvr Dscovr */
    { 1929, "bandwiz-system" },                 /* Bandwiz System - Server */
    { 1930, "driveappserver" },                 /* Drive AppServer */
    { 1931, "amdsched" },                       /* AMD SCHED */
    { 1932, "ctt-broker" },                     /* CTT Broker */
    { 1933, "xmapi" },                          /* IBM LM MT Agent */
    { 1934, "xaapi" },                          /* IBM LM Appl Agent */
    { 1935, "macromedia-fcs" },                 /* Macromedia Flash Communications Server MX */
    { 1936, "jetcmeserver" },                   /* JetCmeServer Server Port */
    { 1937, "jwserver" },                       /* JetVWay Server Port */
    { 1938, "jwclient" },                       /* JetVWay Client Port */
    { 1939, "jvserver" },                       /* JetVision Server Port */
    { 1940, "jvclient" },                       /* JetVision Client Port */
    { 1941, "dic-aida" },                       /* DIC-Aida */
    { 1942, "res" },                            /* Real Enterprise Service */
    { 1943, "beeyond-media" },                  /* Beeyond Media */
    { 1944, "close-combat" },
    { 1945, "dialogic-elmd" },
    { 1946, "tekpls" },
    { 1947, "sentinelsrm" },                    /* SentinelSRM */
    { 1948, "eye2eye" },
    { 1949, "ismaeasdaqlive" },                 /* ISMA Easdaq Live */
    { 1950, "ismaeasdaqtest" },                 /* ISMA Easdaq Test */
    { 1951, "bcs-lmserver" },
    { 1952, "mpnjsc" },
    { 1953, "rapidbase" },                      /* Rapid Base */
    { 1954, "abr-api" },                        /* ABR-API (diskbridge) */
    { 1955, "abr-secure" },                     /* ABR-Secure Data (diskbridge) */
    { 1956, "vrtl-vmf-ds" },                    /* Vertel VMF DS */
    { 1957, "unix-status" },
    { 1958, "dxadmind" },                       /* CA Administration Daemon */
    { 1959, "simp-all" },                       /* SIMP Channel */
    { 1960, "nasmanager" },                     /* Merit DAC NASmanager */
    { 1961, "bts-appserver" },                  /* BTS APPSERVER */
    { 1962, "biap-mp" },                        /* BIAP-MP */
    { 1963, "webmachine" },                     /* WebMachine */
    { 1964, "solid-e-engine" },                 /* SOLID E ENGINE */
    { 1965, "tivoli-npm" },                     /* Tivoli NPM */
    { 1966, "slush" },                          /* Slush */
    { 1967, "sns-quote" },                      /* SNS Quote */
    { 1968, "lipsinc" },                        /* LIPSinc */
    { 1969, "lipsinc1" },                       /* LIPSinc 1 */
    { 1970, "netop-rc" },                       /* NetOp Remote Control */
    { 1971, "netop-school" },                   /* NetOp School */
    { 1972, "intersys-cache" },                 /* Cache */
    { 1973, "dlsrap" },                         /* Data Link Switching Remote Access Protocol */
    { 1974, "drp" },                            /* DRP */
    { 1975, "tcoflashagent" },                  /* TCO Flash Agent */
    { 1976, "tcoregagent" },                    /* TCO Reg Agent */
    { 1977, "tcoaddressbook" },                 /* TCO Address Book */
    { 1978, "unisql" },                         /* UniSQL */
    { 1979, "unisql-java" },                    /* UniSQL Java */
    { 1980, "pearldoc-xact" },                  /* PearlDoc XACT */
    { 1981, "p2pq" },                           /* p2pQ */
    { 1982, "estamp" },                         /* Evidentiary Timestamp */
    { 1983, "lhtp" },                           /* Loophole Test Protocol */
    { 1984, "bb" },                             /* BB */
    { 1985, "hsrp" },                           /* Hot Standby Router Protocol */
    { 1986, "licensedaemon" },                  /* cisco license management */
    { 1987, "tr-rsrb-p1" },                     /* cisco RSRB Priority 1 port */
    { 1988, "tr-rsrb-p2" },                     /* cisco RSRB Priority 2 port */
    { 1989, "tr-rsrb-p3" },                     /* cisco RSRB Priority 3 port */
    { 1990, "stun-p1" },                        /* cisco STUN Priority 1 port */
    { 1991, "stun-p2" },                        /* cisco STUN Priority 2 port */
    { 1992, "stun-p3" },                        /* cisco STUN Priority 3 port */
    { 1993, "snmp-tcp-port" },                  /* cisco SNMP TCP port */
    { 1994, "stun-port" },                      /* cisco serial tunnel port */
    { 1995, "perf-port" },                      /* cisco perf port */
    { 1996, "tr-rsrb-port" },                   /* cisco Remote SRB port */
    { 1997, "gdp-port" },                       /* cisco Gateway Discovery Protocol */
    { 1998, "x25-svc-port" },                   /* cisco X.25 service (XOT) */
    { 1999, "tcp-id-port" },                    /* cisco identification port */
    { 2000, "cisco-sccp" },                     /* Cisco SCCP */
    { 2002, "globe" },
    { 2003, "brutus" },                         /* Brutus Server */
    { 2016, "bootserver" },
    { 2020, "xinupageserver" },
    { 2023, "xinuexpansion3" },
    { 2024, "xinuexpansion4" },
    { 2026, "scrabble" },
    { 2027, "shadowserver" },
    { 2028, "submitserver" },
    { 2029, "hsrpv6" },                         /* Hot Standby Router Protocol IPv6 */
    { 2030, "device2" },
    { 2031, "mobrien-chat" },
    { 2032, "blackboard" },
    { 2033, "glogger" },
    { 2034, "scoremgr" },
    { 2035, "imsldoc" },
    { 2036, "e-dpnet" },                        /* Ethernet WS DP network */
    { 2037, "applus" },                         /* APplus Application Server */
    { 2038, "objectmanager" },
    { 2039, "prizma" },                         /* Prizma Monitoring Service */
    { 2040, "lam" },
    { 2041, "interbase" },
    { 2042, "isis" },
    { 2043, "isis-bcast" },
    { 2044, "rimsl" },
    { 2045, "cdfunc" },
    { 2046, "sdfunc" },
    { 2047, "dls" },
    { 2048, "dls-monitor" },
    { 2049, "nfs" },                            /* Network File System - Sun Microsystems */
    { 2050, "av-emb-config" },                  /* Avaya EMB Config Port */
    { 2051, "epnsdp" },                         /* EPNSDP */
    { 2052, "clearvisn" },                      /* clearVisn Services Port */
    { 2053, "lot105-ds-upd" },                  /* Lot105 DSuper Updates */
    { 2054, "weblogin" },                       /* Weblogin Port */
    { 2055, "iop" },                            /* Iliad-Odyssey Protocol */
    { 2056, "omnisky" },                        /* OmniSky Port */
    { 2057, "rich-cp" },                        /* Rich Content Protocol */
    { 2058, "newwavesearch" },                  /* NewWaveSearchables RMI */
    { 2059, "bmc-messaging" },                  /* BMC Messaging Service */
    { 2060, "teleniumdaemon" },                 /* Telenium Daemon IF */
    { 2061, "netmount" },                       /* NetMount */
    { 2062, "icg-swp" },                        /* ICG SWP Port */
    { 2063, "icg-bridge" },                     /* ICG Bridge Port */
    { 2064, "icg-iprelay" },                    /* ICG IP Relay Port */
    { 2065, "dlsrpn" },                         /* Data Link Switch Read Port Number */
    { 2066, "aura" },                           /* AVM USB Remote Architecture */
    { 2067, "dlswpn" },                         /* Data Link Switch Write Port Number */
    { 2068, "avauthsrvprtcl" },                 /* Avocent AuthSrv Protocol */
    { 2069, "event-port" },                     /* HTTP Event Port */
    { 2070, "ah-esp-encap" },                   /* AH and ESP Encapsulated in UDP packet */
    { 2071, "acp-port" },                       /* Axon Control Protocol */
    { 2072, "msync" },                          /* GlobeCast mSync */
    { 2073, "gxs-data-port" },                  /* DataReel Database Socket */
    { 2074, "vrtl-vmf-sa" },                    /* Vertel VMF SA */
    { 2075, "newlixengine" },                   /* Newlix ServerWare Engine */
    { 2076, "newlixconfig" },                   /* Newlix JSPConfig */
    { 2077, "tsrmagt" },                        /* Old Tivoli Storage Manager */
    { 2078, "tpcsrvr" },                        /* IBM Total Productivity Center Server */
    { 2079, "idware-router" },                  /* IDWARE Router Port */
    { 2080, "autodesk-nlm" },                   /* Autodesk NLM (FLEXlm) */
    { 2081, "kme-trap-port" },                  /* KME PRINTER TRAP PORT */
    { 2082, "infowave" },                       /* Infowave Mobility Server */
    { 2083, "radsec" },                         /* Secure Radius Service */
    { 2084, "sunclustergeo" },                  /* SunCluster Geographic */
    { 2085, "ada-cip" },                        /* ADA Control */
    { 2086, "gnunet" },                         /* GNUnet */
    { 2087, "eli" },                            /* ELI - Event Logging Integration */
    { 2088, "ip-blf" },                         /* IP Busy Lamp Field */
    { 2089, "sep" },                            /* Security Encapsulation Protocol - SEP */
    { 2090, "lrp" },                            /* Load Report Protocol */
    { 2091, "prp" },                            /* PRP */
    { 2092, "descent3" },                       /* Descent 3 */
    { 2093, "nbx-cc" },                         /* NBX CC */
    { 2094, "nbx-au" },                         /* NBX AU */
    { 2095, "nbx-ser" },                        /* NBX SER */
    { 2096, "nbx-dir" },                        /* NBX DIR */
    { 2097, "jetformpreview" },                 /* Jet Form Preview */
    { 2098, "dialog-port" },                    /* Dialog Port */
    { 2099, "h2250-annex-g" },                  /* H.225.0 Annex G Signalling */
    { 2100, "amiganetfs" },                     /* Amiga Network Filesystem */
    { 2101, "rtcm-sc104" },
    { 2102, "zephyr-srv" },                     /* Zephyr server */
    { 2103, "zephyr-clt" },                     /* Zephyr serv-hm connection */
    { 2104, "zephyr-hm" },                      /* Zephyr hostmanager */
    { 2105, "minipay" },                        /* MiniPay */
    { 2106, "mzap" },                           /* MZAP */
    { 2107, "bintec-admin" },                   /* BinTec Admin */
    { 2108, "comcam" },                         /* Comcam */
    { 2109, "ergolight" },                      /* Ergolight */
    { 2110, "umsp" },                           /* UMSP */
    { 2111, "dsatp" },                          /* OPNET Dynamic Sampling Agent Transaction Protocol */
    { 2112, "idonix-metanet" },                 /* Idonix MetaNet */
    { 2113, "hsl-storm" },                      /* HSL StoRM */
    { 2114, "ariascribe" },                     /* Classical Music Meta-Data Access and Enhancement */
    { 2115, "kdm" },                            /* Key Distribution Manager */
    { 2116, "ccowcmr" },                        /* CCOWCMR */
    { 2117, "mentaclient" },                    /* MENTACLIENT */
    { 2118, "mentaserver" },                    /* MENTASERVER */
    { 2119, "gsigatekeeper" },                  /* GSIGATEKEEPER */
    { 2120, "qencp" },                          /* Quick Eagle Networks CP */
    { 2121, "scientia-ssdb" },                  /* SCIENTIA-SSDB */
    { 2122, "caupc-remote" },                   /* CauPC Remote Control */
    { 2123, "gtp-control" },                    /* GTP-Control Plane (3GPP) */
    { 2124, "elatelink" },                      /* ELATELINK */
    { 2125, "lockstep" },                       /* LOCKSTEP */
    { 2126, "pktcable-cops" },                  /* PktCable-COPS */
    { 2127, "index-pc-wb" },                    /* INDEX-PC-WB */
    { 2128, "net-steward" },                    /* Net Steward Control */
    { 2129, "cs-live" },                        /* cs-live.com */
    { 2130, "xds" },                            /* XDS */
    { 2131, "avantageb2b" },                    /* Avantageb2b */
    { 2132, "solera-epmap" },                   /* SoleraTec End Point Map */
    { 2133, "zymed-zpp" },                      /* ZYMED-ZPP */
    { 2134, "avenue" },                         /* AVENUE */
    { 2135, "gris" },                           /* Grid Resource Information Server */
    { 2136, "appworxsrv" },                     /* APPWORXSRV */
    { 2137, "connect" },                        /* CONNECT */
    { 2138, "unbind-cluster" },                 /* UNBIND-CLUSTER */
    { 2139, "ias-auth" },                       /* IAS-AUTH */
    { 2140, "ias-reg" },                        /* IAS-REG */
    { 2141, "ias-admind" },                     /* IAS-ADMIND */
    { 2142, "tdmoip" },                         /* TDM OVER IP */
    { 2143, "lv-jc" },                          /* Live Vault Job Control */
    { 2144, "lv-ffx" },                         /* Live Vault Fast Object Transfer */
    { 2145, "lv-pici" },                        /* Live Vault Remote Diagnostic Console Support */
    { 2146, "lv-not" },                         /* Live Vault Admin Event Notification */
    { 2147, "lv-auth" },                        /* Live Vault Authentication */
    { 2148, "veritas-ucl" },                    /* VERITAS UNIVERSAL COMMUNICATION LAYER */
    { 2149, "acptsys" },                        /* ACPTSYS */
    { 2150, "dynamic3d" },                      /* DYNAMIC3D */
    { 2151, "docent" },                         /* DOCENT */
    { 2152, "gtp-user" },                       /* GTP-User Plane (3GPP) */
    { 2153, "ctlptc" },                         /* Control Protocol */
    { 2154, "stdptc" },                         /* Standard Protocol */
    { 2155, "brdptc" },                         /* Bridge Protocol */
    { 2156, "trp" },                            /* Talari Reliable Protocol */
    { 2157, "xnds" },                           /* Xerox Network Document Scan Protocol */
    { 2158, "touchnetplus" },                   /* TouchNetPlus Service */
    { 2159, "gdbremote" },                      /* GDB Remote Debug Port */
    { 2160, "apc-2160" },                       /* APC 2160 */
    { 2161, "apc-2161" },                       /* APC 2161 */
    { 2162, "navisphere" },                     /* Navisphere */
    { 2163, "navisphere-sec" },                 /* Navisphere Secure */
    { 2164, "ddns-v3" },                        /* Dynamic DNS Version 3 */
    { 2165, "x-bone-api" },                     /* X-Bone API */
    { 2166, "iwserver" },
    { 2167, "raw-serial" },                     /* Raw Async Serial Link */
    { 2168, "easy-soft-mux" },                  /* easy-soft Multiplexer */
    { 2169, "brain" },                          /* Backbone for Academic Information Notification (BRAIN) */
    { 2170, "eyetv" },                          /* EyeTV Server Port */
    { 2171, "msfw-storage" },                   /* MS Firewall Storage */
    { 2172, "msfw-s-storage" },                 /* MS Firewall SecureStorage */
    { 2173, "msfw-replica" },                   /* MS Firewall Replication */
    { 2174, "msfw-array" },                     /* MS Firewall Intra Array */
    { 2175, "airsync" },                        /* Microsoft Desktop AirSync Protocol */
    { 2176, "rapi" },                           /* Microsoft ActiveSync Remote API */
    { 2177, "qwave" },                          /* qWAVE Bandwidth Estimate */
    { 2178, "bitspeer" },                       /* Peer Services for BITS */
    { 2179, "vmrdp" },                          /* Microsoft RDP for virtual machines */
    { 2180, "mc-gt-srv" },                      /* Millicent Vendor Gateway Server */
    { 2181, "eforward" },
    { 2182, "cgn-stat" },                       /* CGN status */
    { 2183, "cgn-config" },                     /* Code Green configuration */
    { 2184, "nvd" },                            /* NVD User */
    { 2185, "onbase-dds" },                     /* OnBase Distributed Disk Services */
    { 2186, "gtaua" },                          /* Guy-Tek Automated Update Applications */
    { 2190, "tivoconnect" },                    /* TiVoConnect Beacon */
    { 2191, "tvbus" },                          /* TvBus Messaging */
    { 2192, "asdis" },                          /* ASDIS software management */
    { 2193, "drwcs" },                          /* Dr.Web Enterprise Management Service */
    { 2197, "mnp-exchange" },                   /* MNP data exchange */
    { 2198, "onehome-remote" },                 /* OneHome Remote Access */
    { 2199, "onehome-help" },                   /* OneHome Service Port */
    { 2201, "ats" },                            /* Advanced Training System Program */
    { 2202, "imtc-map" },                       /* Int. Multimedia Teleconferencing Cosortium */
    { 2203, "b2-runtime" },                     /* b2 Runtime Protocol */
    { 2204, "b2-license" },                     /* b2 License Server */
    { 2205, "jps" },                            /* Java Presentation Server */
    { 2206, "hpocbus" },                        /* HP OpenCall bus */
    { 2207, "hpssd" },                          /* HP Status and Services */
    { 2208, "hpiod" },                          /* HP I/O Backend */
    { 2209, "rimf-ps" },                        /* HP RIM for Files Portal Service */
    { 2210, "noaaport" },                       /* NOAAPORT Broadcast Network */
    { 2211, "emwin" },                          /* EMWIN */
    { 2212, "leecoposserver" },                 /* LeeCO POS Server Service */
    { 2213, "kali" },                           /* Kali */
    { 2214, "rpi" },                            /* RDQ Protocol Interface */
    { 2215, "ipcore" },                         /* IPCore.co.za GPRS */
    { 2216, "vtu-comms" },                      /* VTU data service */
    { 2217, "gotodevice" },                     /* GoToDevice Device Management */
    { 2218, "bounzza" },                        /* Bounzza IRC Proxy */
    { 2219, "netiq-ncap" },                     /* NetIQ NCAP Protocol */
    { 2220, "netiq" },                          /* NetIQ End2End */
    { 2221, "ethernet-ip-s" },                  /* EtherNet/IP over TLS */
    { 2222, "EtherNet-IP-1" },                  /* EtherNet/IP I/O */
    { 2223, "rockwell-csp2" },                  /* Rockwell CSP2 */
    { 2224, "efi-mg" },                         /* Easy Flexible Internet/Multiplayer Games */
    { 2226, "di-drm" },                         /* Digital Instinct DRM */
    { 2227, "di-msg" },                         /* DI Messaging Service */
    { 2228, "ehome-ms" },                       /* eHome Message Server */
    { 2229, "datalens" },                       /* DataLens Service */
    { 2230, "queueadm" },                       /* MetaSoft Job Queue Administration Service */
    { 2231, "wimaxasncp" },                     /* WiMAX ASN Control Plane Protocol */
    { 2232, "ivs-video" },                      /* IVS Video default */
    { 2233, "infocrypt" },                      /* INFOCRYPT */
    { 2234, "directplay" },                     /* DirectPlay */
    { 2235, "sercomm-wlink" },                  /* Sercomm-WLink */
    { 2236, "nani" },                           /* Nani */
    { 2237, "optech-port1-lm" },                /* Optech Port1 License Manager */
    { 2238, "aviva-sna" },                      /* AVIVA SNA SERVER */
    { 2239, "imagequery" },                     /* Image Query */
    { 2240, "recipe" },                         /* RECIPe */
    { 2241, "ivsd" },                           /* IVS Daemon */
    { 2242, "foliocorp" },                      /* Folio Remote Server */
    { 2243, "magicom" },                        /* Magicom Protocol */
    { 2244, "nmsserver" },                      /* NMS Server */
    { 2245, "hao" },                            /* HaO */
    { 2246, "pc-mta-addrmap" },                 /* PacketCable MTA Addr Map */
    { 2247, "antidotemgrsvr" },                 /* Antidote Deployment Manager Service */
    { 2248, "ums" },                            /* User Management Service */
    { 2249, "rfmp" },                           /* RISO File Manager Protocol */
    { 2250, "remote-collab" },
    { 2251, "dif-port" },                       /* Distributed Framework Port */
    { 2252, "njenet-ssl" },                     /* NJENET using SSL */
    { 2253, "dtv-chan-req" },                   /* DTV Channel Request */
    { 2254, "seispoc" },                        /* Seismic P.O.C. Port */
    { 2255, "vrtp" },                           /* VRTP - ViRtue Transfer Protocol */
    { 2256, "pcc-mfp" },                        /* PCC MFP */
    { 2257, "simple-tx-rx" },                   /* simple text/file transfer */
    { 2258, "rcts" },                           /* Rotorcraft Communications Test System */
    { 2259, "bid-serv" },                       /* BIF identifiers resolution service */
    { 2260, "apc-2260" },                       /* APC 2260 */
    { 2261, "comotionmaster" },                 /* CoMotion Master Server */
    { 2262, "comotionback" },                   /* CoMotion Backup Server */
    { 2263, "ecwcfg" },                         /* ECweb Configuration Service */
    { 2264, "apx500api-1" },                    /* Audio Precision Apx500 API Port 1 */
    { 2265, "apx500api-2" },                    /* Audio Precision Apx500 API Port 2 */
    { 2266, "mfserver" },                       /* M-Files Server */
    { 2267, "ontobroker" },                     /* OntoBroker */
    { 2268, "amt" },                            /* AMT */
    { 2269, "mikey" },                          /* MIKEY */
    { 2270, "starschool" },                     /* starSchool */
    { 2271, "mmcals" },                         /* Secure Meeting Maker Scheduling */
    { 2272, "mmcal" },                          /* Meeting Maker Scheduling */
    { 2273, "mysql-im" },                       /* MySQL Instance Manager */
    { 2274, "pcttunnell" },                     /* PCTTunneller */
    { 2275, "ibridge-data" },                   /* iBridge Conferencing */
    { 2276, "ibridge-mgmt" },                   /* iBridge Management */
    { 2277, "bluectrlproxy" },                  /* Bt device control proxy */
    { 2278, "s3db" },                           /* Simple Stacked Sequences Database */
    { 2279, "xmquery" },
    { 2280, "lnvpoller" },                      /* LNVPOLLER */
    { 2281, "lnvconsole" },                     /* LNVCONSOLE */
    { 2282, "lnvalarm" },                       /* LNVALARM */
    { 2283, "lnvstatus" },                      /* LNVSTATUS */
    { 2284, "lnvmaps" },                        /* LNVMAPS */
    { 2285, "lnvmailmon" },                     /* LNVMAILMON */
    { 2286, "nas-metering" },                   /* NAS-Metering */
    { 2287, "dna" },                            /* DNA */
    { 2288, "netml" },                          /* NETML */
    { 2289, "dict-lookup" },                    /* Lookup dict server */
    { 2290, "sonus-logging" },                  /* Sonus Logging Services */
    { 2291, "eapsp" },                          /* EPSON Advanced Printer Share Protocol */
    { 2292, "mib-streaming" },                  /* Sonus Element Management Services */
    { 2293, "npdbgmngr" },                      /* Network Platform Debug Manager */
    { 2294, "konshus-lm" },                     /* Konshus License Manager (FLEX) */
    { 2295, "advant-lm" },                      /* Advant License Manager */
    { 2296, "theta-lm" },                       /* Theta License Manager (Rainbow) */
    { 2297, "d2k-datamover1" },                 /* D2K DataMover 1 */
    { 2298, "d2k-datamover2" },                 /* D2K DataMover 2 */
    { 2299, "pc-telecommute" },                 /* PC Telecommute */
    { 2300, "cvmmon" },                         /* CVMMON */
    { 2301, "cpq-wbem" },                       /* Compaq HTTP */
    { 2302, "binderysupport" },                 /* Bindery Support */
    { 2303, "proxy-gateway" },                  /* Proxy Gateway */
    { 2304, "attachmate-uts" },                 /* Attachmate UTS */
    { 2305, "mt-scaleserver" },                 /* MT ScaleServer */
    { 2306, "tappi-boxnet" },                   /* TAPPI BoxNet */
    { 2307, "pehelp" },
    { 2308, "sdhelp" },
    { 2309, "sdserver" },                       /* SD Server */
    { 2310, "sdclient" },                       /* SD Client */
    { 2311, "messageservice" },                 /* Message Service */
    { 2312, "wanscaler" },                      /* WANScaler Communication Service */
    { 2313, "iapp" },                           /* IAPP (Inter Access Point Protocol) */
    { 2314, "cr-websystems" },                  /* CR WebSystems */
    { 2315, "precise-sft" },                    /* Precise Sft. */
    { 2316, "sent-lm" },                        /* SENT License Manager */
    { 2317, "attachmate-g32" },                 /* Attachmate G32 */
    { 2318, "cadencecontrol" },                 /* Cadence Control */
    { 2319, "infolibria" },                     /* InfoLibria */
    { 2320, "siebel-ns" },                      /* Siebel NS */
    { 2321, "rdlap" },                          /* RDLAP */
    { 2322, "ofsd" },
    { 2323, "3d-nfsd" },
    { 2324, "cosmocall" },                      /* Cosmocall */
    { 2325, "ansysli" },                        /* ANSYS Licensing Interconnect */
    { 2326, "idcp" },                           /* IDCP */
    { 2327, "xingcsm" },
    { 2328, "netrix-sftm" },                    /* Netrix SFTM */
    { 2329, "nvd" },                            /* NVD */
    { 2330, "tscchat" },                        /* TSCCHAT */
    { 2331, "agentview" },                      /* AGENTVIEW */
    { 2332, "rcc-host" },                       /* RCC Host */
    { 2333, "snapp" },                          /* SNAPP */
    { 2334, "ace-client" },                     /* ACE Client Auth */
    { 2335, "ace-proxy" },                      /* ACE Proxy */
    { 2336, "appleugcontrol" },                 /* Apple UG Control */
    { 2337, "ideesrv" },
    { 2338, "norton-lambert" },                 /* Norton Lambert */
    { 2339, "3com-webview" },                   /* 3Com WebView */
    { 2340, "wrs-registry" },                   /* WRS Registry */
    { 2341, "xiostatus" },                      /* XIO Status */
    { 2342, "manage-exec" },                    /* Seagate Manage Exec */
    { 2343, "nati-logos" },
    { 2344, "fcmsys" },
    { 2345, "dbm" },
    { 2346, "redstorm-join" },                  /* Game Connection Port */
    { 2347, "redstorm-find" },                  /* Game Announcement and Location */
    { 2348, "redstorm-info" },                  /* Information to query for game status */
    { 2349, "redstorm-diag" },                  /* Diagnostics Port */
    { 2350, "psbserver" },                      /* Pharos Booking Server */
    { 2351, "psrserver" },
    { 2352, "pslserver" },
    { 2353, "pspserver" },
    { 2354, "psprserver" },
    { 2355, "psdbserver" },
    { 2356, "gxtelmd" },                        /* GXT License Managemant */
    { 2357, "unihub-server" },                  /* UniHub Server */
    { 2358, "futrix" },                         /* Futrix */
    { 2359, "flukeserver" },                    /* FlukeServer */
    { 2360, "nexstorindltd" },                  /* NexstorIndLtd */
    { 2361, "tl1" },                            /* TL1 */
    { 2362, "digiman" },
    { 2363, "mediacntrlnfsd" },                 /* Media Central NFSD */
    { 2364, "oi-2000" },                        /* OI-2000 */
    { 2365, "dbref" },
    { 2366, "qip-login" },
    { 2367, "service-ctrl" },                   /* Service Control */
    { 2368, "opentable" },                      /* OpenTable */
    { 2369, "bif-p2p" },                        /* Blockchain Identifier InFrastructure P2P */
    { 2370, "l3-hbmon" },                       /* L3-HBMon */
    { 2372, "lanmessenger" },                   /* LanMessenger */
    { 2381, "compaq-https" },                   /* Compaq HTTPS */
    { 2382, "ms-olap3" },                       /* Microsoft OLAP */
    { 2383, "ms-olap4" },                       /* Microsoft OLAP */
    { 2385, "sd-data" },                        /* SD-DATA */
    { 2386, "virtualtape" },                    /* Virtual Tape */
    { 2387, "vsamredirector" },                 /* VSAM Redirector */
    { 2388, "mynahautostart" },                 /* MYNAH AutoStart */
    { 2389, "ovsessionmgr" },                   /* OpenView Session Mgr */
    { 2390, "rsmtp" },                          /* RSMTP */
    { 2391, "3com-net-mgmt" },                  /* 3COM Net Management */
    { 2392, "tacticalauth" },                   /* Tactical Auth */
    { 2393, "ms-olap1" },                       /* MS OLAP 1 */
    { 2394, "ms-olap2" },                       /* MS OLAP 2 */
    { 2395, "lan900-remote" },                  /* LAN900 Remote */
    { 2396, "wusage" },                         /* Wusage */
    { 2397, "ncl" },                            /* NCL */
    { 2398, "orbiter" },                        /* Orbiter */
    { 2399, "fmpro-fdal" },                     /* FileMaker, Inc. - Data Access Layer */
    { 2400, "opequus-server" },                 /* OpEquus Server */
    { 2401, "cvspserver" },
    { 2402, "taskmaster2000" },                 /* TaskMaster 2000 Server */
    { 2403, "taskmaster2000" },                 /* TaskMaster 2000 Web */
    { 2404, "iec-104" },                        /* IEC 60870-5-104 process control over IP */
    { 2405, "trc-netpoll" },                    /* TRC Netpoll */
    { 2406, "jediserver" },                     /* JediServer */
    { 2407, "orion" },                          /* Orion */
    { 2409, "sns-protocol" },                   /* SNS Protocol */
    { 2410, "vrts-registry" },                  /* VRTS Registry */
    { 2411, "netwave-ap-mgmt" },                /* Netwave AP Management */
    { 2412, "cdn" },                            /* CDN */
    { 2413, "orion-rmi-reg" },
    { 2414, "beeyond" },                        /* Beeyond */
    { 2415, "codima-rtp" },                     /* Codima Remote Transaction Protocol */
    { 2416, "rmtserver" },                      /* RMT Server */
    { 2417, "composit-server" },                /* Composit Server */
    { 2418, "cas" },
    { 2419, "attachmate-s2s" },                 /* Attachmate S2S */
    { 2420, "dslremote-mgmt" },                 /* DSL Remote Management */
    { 2421, "g-talk" },                         /* G-Talk */
    { 2422, "crmsbits" },                       /* CRMSBITS */
    { 2423, "rnrp" },                           /* RNRP */
    { 2424, "kofax-svr" },                      /* KOFAX-SVR */
    { 2425, "fjitsuappmgr" },                   /* Fujitsu App Manager */
    { 2426, "vcmp" },                           /* VeloCloud MultiPath Protocol */
    { 2427, "mgcp-gateway" },                   /* Media Gateway Control Protocol Gateway */
    { 2428, "ott" },                            /* One Way Trip Time */
    { 2429, "ft-role" },                        /* FT-ROLE */
    { 2430, "venus" },
    { 2431, "venus-se" },
    { 2432, "codasrv" },
    { 2433, "codasrv-se" },
    { 2434, "pxc-epmap" },
    { 2435, "optilogic" },                      /* OptiLogic */
    { 2436, "topx" },                           /* TOP/X */
    { 2437, "unicontrol" },                     /* UniControl */
    { 2438, "msp" },                            /* MSP */
    { 2439, "sybasedbsynch" },                  /* SybaseDBSynch */
    { 2440, "spearway" },                       /* Spearway Lockers */
    { 2441, "pvsw-inet" },                      /* Pervasive I*net Data Server */
    { 2442, "netangel" },                       /* Netangel */
    { 2443, "powerclientcsf" },                 /* PowerClient Central Storage Facility */
    { 2444, "btpp2sectrans" },                  /* BT PP2 Sectrans */
    { 2445, "dtn1" },                           /* DTN1 */
    { 2446, "bues-service" },                   /* bues_service */
    { 2447, "ovwdb" },                          /* OpenView NNM daemon */
    { 2448, "hpppssvr" },                       /* hpppsvr */
    { 2449, "ratl" },                           /* RATL */
    { 2450, "netadmin" },
    { 2451, "netchat" },
    { 2452, "snifferclient" },                  /* SnifferClient */
    { 2453, "madge-ltd" },
    { 2454, "indx-dds" },                       /* IndX-DDS */
    { 2455, "wago-io-system" },                 /* WAGO-IO-SYSTEM */
    { 2456, "altav-remmgt" },
    { 2457, "rapido-ip" },                      /* Rapido_IP */
    { 2458, "griffin" },
    { 2459, "xrpl" },                           /* Community */
    { 2460, "ms-theater" },
    { 2461, "qadmifoper" },
    { 2462, "qadmifevent" },
    { 2463, "lsi-raid-mgmt" },                  /* LSI RAID Management */
    { 2464, "direcpc-si" },                     /* DirecPC SI */
    { 2465, "lbm" },                            /* Load Balance Management */
    { 2466, "lbf" },                            /* Load Balance Forwarding */
    { 2467, "high-criteria" },                  /* High Criteria */
    { 2468, "qip-msgd" },                       /* qip_msgd */
    { 2469, "mti-tcs-comm" },                   /* MTI-TCS-COMM */
    { 2470, "taskman-port" },
    { 2471, "seaodbc" },                        /* SeaODBC */
    { 2472, "c3" },                             /* C3 */
    { 2473, "aker-cdp" },                       /* Aker-cdp */
    { 2474, "vitalanalysis" },                  /* Vital Analysis */
    { 2475, "ace-server" },                     /* ACE Server */
    { 2476, "ace-svr-prop" },                   /* ACE Server Propagation */
    { 2477, "ssm-cvs" },                        /* SecurSight Certificate Valifation Service */
    { 2478, "ssm-cssps" },                      /* SecurSight Authentication Server (SSL) */
    { 2479, "ssm-els" },                        /* SecurSight Event Logging Server (SSL) */
    { 2480, "powerexchange" },                  /* Informatica PowerExchange Listener */
    { 2481, "giop" },                           /* Oracle GIOP */
    { 2482, "giop-ssl" },                       /* Oracle GIOP SSL */
    { 2483, "ttc" },                            /* Oracle TTC */
    { 2484, "ttc-ssl" },                        /* Oracle TTC SSL */
    { 2485, "netobjects1" },                    /* Net Objects1 */
    { 2486, "netobjects2" },                    /* Net Objects2 */
    { 2487, "pns" },                            /* Policy Notice Service */
    { 2488, "moy-corp" },                       /* Moy Corporation */
    { 2489, "tsilb" },                          /* TSILB */
    { 2490, "qip-qdhcp" },                      /* qip_qdhcp */
    { 2491, "conclave-cpp" },                   /* Conclave CPP */
    { 2492, "groove" },                         /* GROOVE */
    { 2493, "talarian-mqs" },                   /* Talarian MQS */
    { 2494, "bmc-ar" },                         /* BMC AR */
    { 2495, "fast-rem-serv" },                  /* Fast Remote Services */
    { 2496, "dirgis" },                         /* DIRGIS */
    { 2497, "quaddb" },                         /* Quad DB */
    { 2498, "odn-castraq" },                    /* ODN-CasTraq */
    { 2499, "unicontrol" },                     /* UniControl */
    { 2500, "rtsserv" },                        /* Resource Tracking system server */
    { 2501, "rtsclient" },                      /* Resource Tracking system client */
    { 2502, "kentrox-prot" },                   /* Kentrox Protocol */
    { 2503, "nms-dpnss" },                      /* NMS-DPNSS */
    { 2504, "wlbs" },                           /* WLBS */
    { 2505, "ppcontrol" },                      /* PowerPlay Control */
    { 2506, "jbroker" },
    { 2507, "spock" },
    { 2508, "jdatastore" },                     /* JDataStore */
    { 2509, "fjmpss" },
    { 2510, "fjappmgrbulk" },
    { 2511, "metastorm" },                      /* Metastorm */
    { 2512, "citrixima" },                      /* Citrix IMA */
    { 2513, "citrixadmin" },                    /* Citrix ADMIN */
    { 2514, "facsys-ntp" },                     /* Facsys NTP */
    { 2515, "facsys-router" },                  /* Facsys Router */
    { 2516, "maincontrol" },                    /* Main Control */
    { 2517, "call-sig-trans" },                 /* H.323 Annex E Call Control Signalling Transport */
    { 2518, "willy" },                          /* Willy */
    { 2519, "globmsgsvc" },
    { 2520, "pvsw" },                           /* Pervasive Listener */
    { 2521, "adaptecmgr" },                     /* Adaptec Manager */
    { 2522, "windb" },                          /* WinDb */
    { 2523, "qke-llc-v3" },                     /* Qke LLC V.3 */
    { 2524, "optiwave-lm" },                    /* Optiwave License Management */
    { 2525, "ms-v-worlds" },                    /* MS V-Worlds */
    { 2526, "ema-sent-lm" },                    /* EMA License Manager */
    { 2527, "iqserver" },                       /* IQ Server */
    { 2528, "ncr-ccl" },                        /* NCR CCL */
    { 2529, "utsftp" },                         /* UTS FTP */
    { 2530, "vrcommerce" },                     /* VR Commerce */
    { 2531, "ito-e-gui" },                      /* ITO-E GUI */
    { 2532, "ovtopmd" },                        /* OVTOPMD */
    { 2533, "snifferserver" },                  /* SnifferServer */
    { 2534, "combox-web-acc" },                 /* Combox Web Access */
    { 2535, "madcap" },                         /* MADCAP */
    { 2536, "btpp2audctr1" },
    { 2537, "upgrade" },                        /* Upgrade Protocol */
    { 2538, "vnwk-prapi" },
    { 2539, "vsiadmin" },                       /* VSI Admin */
    { 2540, "lonworks" },                       /* LonWorks */
    { 2541, "lonworks2" },                      /* LonWorks2 */
    { 2542, "udrawgraph" },                     /* uDraw(Graph) */
    { 2543, "reftek" },                         /* REFTEK */
    { 2544, "novell-zen" },                     /* Management Daemon Refresh */
    { 2545, "sis-emt" },
    { 2546, "vytalvaultbrtp" },
    { 2547, "vytalvaultvsmp" },
    { 2548, "vytalvaultpipe" },
    { 2549, "ipass" },                          /* IPASS */
    { 2550, "ads" },                            /* ADS */
    { 2551, "isg-uda-server" },                 /* ISG UDA Server */
    { 2552, "call-logging" },                   /* Call Logging */
    { 2553, "efidiningport" },
    { 2554, "vcnet-link-v10" },                 /* VCnet-Link v10 */
    { 2555, "compaq-wcp" },                     /* Compaq WCP */
    { 2556, "nicetec-nmsvc" },
    { 2557, "nicetec-mgmt" },
    { 2558, "pclemultimedia" },                 /* PCLE Multi Media */
    { 2559, "lstp" },                           /* LSTP */
    { 2560, "labrat" },
    { 2561, "mosaixcc" },                       /* MosaixCC */
    { 2562, "delibo" },                         /* Delibo */
    { 2563, "cti-redwood" },                    /* CTI Redwood */
    { 2564, "hp-3000-telnet" },                 /* HP 3000 NS/VT block mode telnet */
    { 2565, "coord-svr" },                      /* Coordinator Server */
    { 2566, "pcs-pcw" },
    { 2567, "clp" },                            /* Cisco Line Protocol */
    { 2568, "spamtrap" },                       /* SPAM TRAP */
    { 2569, "sonuscallsig" },                   /* Sonus Call Signal */
    { 2570, "hs-port" },                        /* HS Port */
    { 2571, "cecsvc" },                         /* CECSVC */
    { 2572, "ibp" },                            /* IBP */
    { 2573, "trustestablish" },                 /* Trust Establish */
    { 2574, "blockade-bpsp" },                  /* Blockade BPSP */
    { 2575, "hl7" },                            /* HL7 */
    { 2576, "tclprodebugger" },                 /* TCL Pro Debugger */
    { 2577, "scipticslsrvr" },                  /* Scriptics Lsrvr */
    { 2578, "rvs-isdn-dcp" },                   /* RVS ISDN DCP */
    { 2579, "mpfoncl" },
    { 2580, "tributary" },                      /* Tributary */
    { 2581, "argis-te" },                       /* ARGIS TE */
    { 2582, "argis-ds" },                       /* ARGIS DS */
    { 2583, "mon" },                            /* MON */
    { 2584, "cyaserv" },
    { 2585, "netx-server" },                    /* NETX Server */
    { 2586, "netx-agent" },                     /* NETX Agent */
    { 2587, "masc" },                           /* MASC */
    { 2588, "privilege" },                      /* Privilege */
    { 2589, "quartus-tcl" },
    { 2590, "idotdist" },
    { 2591, "maytagshuffle" },                  /* Maytag Shuffle */
    { 2592, "netrek" },
    { 2593, "mns-mail" },                       /* MNS Mail Notice Service */
    { 2594, "dts" },                            /* Data Base Server */
    { 2595, "worldfusion1" },                   /* World Fusion 1 */
    { 2596, "worldfusion2" },                   /* World Fusion 2 */
    { 2597, "homesteadglory" },                 /* Homestead Glory */
    { 2598, "citriximaclient" },                /* Citrix MA Client */
    { 2599, "snapd" },                          /* Snap Discovery */
    { 2600, "hpstgmgr" },                       /* HPSTGMGR */
    { 2601, "discp-client" },
    { 2602, "discp-server" },
    { 2603, "servicemeter" },                   /* Service Meter */
    { 2604, "nsc-ccs" },                        /* NSC CCS */
    { 2605, "nsc-posa" },                       /* NSC POSA */
    { 2606, "netmon" },                         /* Dell Netmon */
    { 2607, "connection" },                     /* Dell Connection */
    { 2608, "wag-service" },                    /* Wag Service */
    { 2609, "system-monitor" },                 /* System Monitor */
    { 2610, "versa-tek" },                      /* VersaTek */
    { 2611, "lionhead" },                       /* LIONHEAD */
    { 2612, "qpasa-agent" },                    /* Qpasa Agent */
    { 2613, "smntubootstrap" },                 /* SMNTUBootstrap */
    { 2614, "neveroffline" },                   /* Never Offline */
    { 2615, "firepower" },
    { 2616, "appswitch-emp" },
    { 2617, "cmadmin" },                        /* Clinical Context Managers */
    { 2618, "priority-e-com" },                 /* Priority E-Com */
    { 2619, "bruce" },
    { 2620, "lpsrecommender" },                 /* LPSRecommender */
    { 2621, "miles-apart" },                    /* Miles Apart Jukebox Server */
    { 2622, "metricadbc" },                     /* MetricaDBC */
    { 2623, "lmdp" },                           /* LMDP */
    { 2624, "aria" },                           /* Aria */
    { 2625, "blwnkl-port" },                    /* Blwnkl Port */
    { 2626, "gbjd816" },
    { 2627, "moshebeeri" },                     /* Moshe Beeri */
    { 2628, "dict" },                           /* DICT */
    { 2629, "sitaraserver" },                   /* Sitara Server */
    { 2630, "sitaramgmt" },                     /* Sitara Management */
    { 2631, "sitaradir" },                      /* Sitara Dir */
    { 2632, "irdg-post" },                      /* IRdg Post */
    { 2633, "interintelli" },                   /* InterIntelli */
    { 2634, "pk-electronics" },                 /* PK Electronics */
    { 2635, "backburner" },                     /* Back Burner */
    { 2636, "solve" },                          /* Solve */
    { 2637, "imdocsvc" },                       /* Import Document Service */
    { 2638, "sybaseanywhere" },                 /* Sybase Anywhere */
    { 2639, "aminet" },                         /* AMInet */
    { 2640, "ami-control" },                    /* Alcorn McBride Inc protocol used for device control */
    { 2641, "hdl-srv" },                        /* HDL Server */
    { 2642, "tragic" },                         /* Tragic */
    { 2643, "gte-samp" },                       /* GTE-SAMP */
    { 2644, "travsoft-ipx-t" },                 /* Travsoft IPX Tunnel */
    { 2645, "novell-ipx-cmd" },                 /* Novell IPX CMD */
    { 2646, "and-lm" },                         /* AND License Manager */
    { 2647, "syncserver" },                     /* SyncServer */
    { 2648, "upsnotifyprot" },                  /* Upsnotifyprot */
    { 2649, "vpsipport" },                      /* VPSIPPORT */
    { 2650, "eristwoguns" },
    { 2651, "ebinsite" },                       /* EBInSite */
    { 2652, "interpathpanel" },                 /* InterPathPanel */
    { 2653, "sonus" },                          /* Sonus */
    { 2654, "corel-vncadmin" },                 /* Corel VNC Admin */
    { 2655, "unglue" },                         /* UNIX Nt Glue */
    { 2656, "kana" },                           /* Kana */
    { 2657, "sns-dispatcher" },                 /* SNS Dispatcher */
    { 2658, "sns-admin" },                      /* SNS Admin */
    { 2659, "sns-query" },                      /* SNS Query */
    { 2660, "gcmonitor" },                      /* GC Monitor */
    { 2661, "olhost" },                         /* OLHOST */
    { 2662, "bintec-capi" },                    /* BinTec-CAPI */
    { 2663, "bintec-tapi" },                    /* BinTec-TAPI */
    { 2664, "patrol-mq-gm" },                   /* Patrol for MQ GM */
    { 2665, "patrol-mq-nm" },                   /* Patrol for MQ NM */
    { 2666, "extensis" },
    { 2667, "alarm-clock-s" },                  /* Alarm Clock Server */
    { 2668, "alarm-clock-c" },                  /* Alarm Clock Client */
    { 2669, "toad" },                           /* TOAD */
    { 2670, "tve-announce" },                   /* TVE Announce */
    { 2671, "newlixreg" },
    { 2672, "nhserver" },
    { 2673, "firstcall42" },                    /* First Call 42 */
    { 2674, "ewnn" },
    { 2675, "ttc-etap" },                       /* TTC ETAP */
    { 2676, "simslink" },                       /* SIMSLink */
    { 2677, "gadgetgate1way" },                 /* Gadget Gate 1 Way */
    { 2678, "gadgetgate2way" },                 /* Gadget Gate 2 Way */
    { 2679, "syncserverssl" },                  /* Sync Server SSL */
    { 2680, "pxc-sapxom" },
    { 2681, "mpnjsomb" },
    { 2683, "ncdloadbalance" },                 /* NCDLoadBalance */
    { 2684, "mpnjsosv" },
    { 2685, "mpnjsocl" },
    { 2686, "mpnjsomg" },
    { 2687, "pq-lic-mgmt" },
    { 2688, "md-cg-http" },                     /* md-cf-http */
    { 2689, "fastlynx" },                       /* FastLynx */
    { 2690, "hp-nnm-data" },                    /* HP NNM Embedded Database */
    { 2691, "itinternet" },                     /* ITInternet ISM Server */
    { 2692, "admins-lms" },                     /* Admins LMS */
    { 2694, "pwrsevent" },
    { 2695, "vspread" },                        /* VSPREAD */
    { 2696, "unifyadmin" },                     /* Unify Admin */
    { 2697, "oce-snmp-trap" },                  /* Oce SNMP Trap Port */
    { 2698, "mck-ivpip" },                      /* MCK-IVPIP */
    { 2699, "csoft-plusclnt" },                 /* Csoft Plus Client */
    { 2700, "tqdata" },
    { 2701, "sms-rcinfo" },                     /* SMS RCINFO */
    { 2702, "sms-xfer" },                       /* SMS XFER */
    { 2703, "sms-chat" },                       /* SMS CHAT */
    { 2704, "sms-remctrl" },                    /* SMS REMCTRL */
    { 2705, "sds-admin" },                      /* SDS Admin */
    { 2706, "ncdmirroring" },                   /* NCD Mirroring */
    { 2707, "emcsymapiport" },                  /* EMCSYMAPIPORT */
    { 2708, "banyan-net" },                     /* Banyan-Net */
    { 2709, "supermon" },                       /* Supermon */
    { 2710, "sso-service" },                    /* SSO Service */
    { 2711, "sso-control" },                    /* SSO Control */
    { 2712, "aocp" },                           /* Axapta Object Communication Protocol */
    { 2713, "raventbs" },                       /* Raven Trinity Broker Service */
    { 2714, "raventdm" },                       /* Raven Trinity Data Mover */
    { 2715, "hpstgmgr2" },                      /* HPSTGMGR2 */
    { 2716, "inova-ip-disco" },                 /* Inova IP Disco */
    { 2717, "pn-requester" },                   /* PN REQUESTER */
    { 2718, "pn-requester2" },                  /* PN REQUESTER 2 */
    { 2719, "scan-change" },                    /* Scan & Change */
    { 2720, "wkars" },
    { 2721, "smart-diagnose" },                 /* Smart Diagnose */
    { 2722, "proactivesrvr" },                  /* Proactive Server */
    { 2723, "watchdog-nt" },                    /* WatchDog NT Protocol */
    { 2724, "qotps" },
    { 2725, "msolap-ptp2" },                    /* MSOLAP PTP2 */
    { 2726, "tams" },                           /* TAMS */
    { 2727, "mgcp-callagent" },                 /* Media Gateway Control Protocol Call Agent */
    { 2728, "sqdr" },                           /* SQDR */
    { 2729, "tcim-control" },                   /* TCIM Control */
    { 2730, "nec-raidplus" },                   /* NEC RaidPlus */
    { 2731, "fyre-messanger" },                 /* Fyre Messanger */
    { 2732, "g5m" },                            /* G5M */
    { 2733, "signet-ctf" },                     /* Signet CTF */
    { 2734, "ccs-software" },                   /* CCS Software */
    { 2735, "netiq-mc" },                       /* NetIQ Monitor Console */
    { 2736, "radwiz-nms-srv" },                 /* RADWIZ NMS SRV */
    { 2737, "srp-feedback" },                   /* SRP Feedback */
    { 2738, "ndl-tcp-ois-gw" },                 /* NDL TCP-OSI Gateway */
    { 2739, "tn-timing" },                      /* TN Timing */
    { 2740, "alarm" },                          /* Alarm */
    { 2741, "tsb" },                            /* TSB */
    { 2742, "tsb2" },                           /* TSB2 */
    { 2743, "murx" },
    { 2744, "honyaku" },
    { 2745, "urbisnet" },                       /* URBISNET */
    { 2746, "cpudpencap" },                     /* CPUDPENCAP */
    { 2747, "fjippol-swrly" },
    { 2748, "fjippol-polsvr" },
    { 2749, "fjippol-cnsl" },
    { 2750, "fjippol-port1" },
    { 2751, "fjippol-port2" },
    { 2752, "rsisysaccess" },                   /* RSISYS ACCESS */
    { 2753, "de-spot" },
    { 2754, "apollo-cc" },                      /* APOLLO CC */
    { 2755, "expresspay" },                     /* Express Pay */
    { 2756, "simplement-tie" },
    { 2757, "cnrp" },                           /* CNRP */
    { 2758, "apollo-status" },                  /* APOLLO Status */
    { 2759, "apollo-gms" },                     /* APOLLO GMS */
    { 2760, "sabams" },                         /* Saba MS */
    { 2761, "dicom-iscl" },                     /* DICOM ISCL */
    { 2762, "dicom-tls" },                      /* DICOM TLS */
    { 2763, "desktop-dna" },                    /* Desktop DNA */
    { 2764, "data-insurance" },                 /* Data Insurance */
    { 2765, "qip-audup" },
    { 2766, "compaq-scp" },                     /* Compaq SCP */
    { 2767, "uadtc" },                          /* UADTC */
    { 2768, "uacs" },                           /* UACS */
    { 2769, "exce" },                           /* eXcE */
    { 2770, "veronica" },                       /* Veronica */
    { 2771, "vergencecm" },                     /* Vergence CM */
    { 2772, "auris" },
    { 2773, "rbakcup1" },                       /* RBackup Remote Backup */
    { 2774, "rbakcup2" },                       /* RBackup Remote Backup */
    { 2775, "smpp" },                           /* SMPP */
    { 2776, "ridgeway1" },                      /* Ridgeway Systems & Software */
    { 2777, "ridgeway2" },                      /* Ridgeway Systems & Software */
    { 2778, "gwen-sonya" },                     /* Gwen-Sonya */
    { 2779, "lbc-sync" },                       /* LBC Sync */
    { 2780, "lbc-control" },                    /* LBC Control */
    { 2781, "whosells" },
    { 2782, "everydayrc" },
    { 2783, "aises" },                          /* AISES */
    { 2784, "www-dev" },                        /* world wide web - development */
    { 2785, "aic-np" },
    { 2786, "aic-oncrpc" },                     /* aic-oncrpc - Destiny MCD database */
    { 2787, "piccolo" },                        /* piccolo - Cornerstone Software */
    { 2788, "fryeserv" },                       /* NetWare Loadable Module - Seagate Software */
    { 2789, "media-agent" },                    /* Media Agent */
    { 2790, "plgproxy" },                       /* PLG Proxy */
    { 2791, "mtport-regist" },                  /* MT Port Registrator */
    { 2792, "f5-globalsite" },
    { 2793, "initlsmsad" },
    { 2795, "livestats" },                      /* LiveStats */
    { 2796, "ac-tech" },
    { 2797, "esp-encap" },
    { 2798, "tmesis-upshot" },                  /* TMESIS-UPShot */
    { 2799, "icon-discover" },                  /* ICON Discover */
    { 2800, "acc-raid" },                       /* ACC RAID */
    { 2801, "igcp" },                           /* IGCP */
    { 2803, "btprjctrl" },
    { 2804, "dvr-esm" },                        /* March Networks Digital Video Recorders and Enterprise Service Manager products */
    { 2805, "wta-wsp-s" },                      /* WTA WSP-S */
    { 2806, "cspuni" },
    { 2807, "cspmulti" },
    { 2808, "j-lan-p" },                        /* J-LAN-P */
    { 2809, "corbaloc" },                       /* CORBA LOC */
    { 2810, "netsteward" },                     /* Active Net Steward */
    { 2811, "gsiftp" },                         /* GSI FTP */
    { 2812, "atmtcp" },
    { 2813, "llm-pass" },
    { 2814, "llm-csv" },
    { 2815, "lbc-measure" },                    /* LBC Measurement */
    { 2816, "lbc-watchdog" },                   /* LBC Watchdog */
    { 2817, "nmsigport" },                      /* NMSig Port */
    { 2818, "rmlnk" },
    { 2819, "fc-faultnotify" },                 /* FC Fault Notification */
    { 2820, "univision" },                      /* UniVision */
    { 2821, "vrts-at-port" },                   /* VERITAS Authentication Service */
    { 2822, "ka0wuc" },
    { 2823, "cqg-netlan" },                     /* CQG Net/LAN */
    { 2824, "cqg-netlan-1" },                   /* CQG Net/LAN 1 */
    { 2826, "slc-systemlog" },
    { 2827, "slc-ctrlrloops" },
    { 2828, "itm-lm" },                         /* ITM License Manager */
    { 2829, "silkp1" },
    { 2830, "silkp2" },
    { 2831, "silkp3" },
    { 2832, "silkp4" },
    { 2833, "glishd" },
    { 2834, "evtp" },                           /* EVTP */
    { 2835, "evtp-data" },                      /* EVTP-DATA */
    { 2836, "catalyst" },
    { 2837, "repliweb" },                       /* Repliweb */
    { 2838, "starbot" },                        /* Starbot */
    { 2839, "nmsigport" },                      /* NMSigPort */
    { 2840, "l3-exprt" },
    { 2841, "l3-ranger" },
    { 2842, "l3-hawk" },
    { 2843, "pdnet" },                          /* PDnet */
    { 2844, "bpcp-poll" },                      /* BPCP POLL */
    { 2845, "bpcp-trap" },                      /* BPCP TRAP */
    { 2846, "aimpp-hello" },                    /* AIMPP Hello */
    { 2847, "aimpp-port-req" },                 /* AIMPP Port Req */
    { 2848, "amt-blc-port" },                   /* AMT-BLC-PORT */
    { 2849, "fxp" },                            /* FXP */
    { 2850, "metaconsole" },                    /* MetaConsole */
    { 2851, "webemshttp" },
    { 2852, "bears-01" },
    { 2853, "ispipes" },                        /* ISPipes */
    { 2854, "infomover" },                      /* InfoMover */
    { 2856, "cesdinv" },
    { 2857, "simctlp" },                        /* SimCtIP */
    { 2858, "ecnp" },                           /* ECNP */
    { 2859, "activememory" },                   /* Active Memory */
    { 2860, "dialpad-voice1" },                 /* Dialpad Voice 1 */
    { 2861, "dialpad-voice2" },                 /* Dialpad Voice 2 */
    { 2862, "ttg-protocol" },                   /* TTG Protocol */
    { 2863, "sonardata" },                      /* Sonar Data */
    { 2864, "astronova-main" },                 /* main 5001 cmd */
    { 2865, "pit-vpn" },
    { 2866, "iwlistener" },
    { 2867, "esps-portal" },
    { 2868, "npep-messaging" },                 /* Norman Proprietaqry Events Protocol */
    { 2869, "icslap" },                         /* ICSLAP */
    { 2870, "daishi" },
    { 2871, "msi-selectplay" },                 /* MSI Select Play */
    { 2872, "radix" },                          /* RADIX */
    { 2873, "psrt" },                           /* PubSub Realtime Telemetry Protocol */
    { 2874, "dxmessagebase1" },                 /* DX Message Base Transport Protocol */
    { 2875, "dxmessagebase2" },                 /* DX Message Base Transport Protocol */
    { 2876, "sps-tunnel" },                     /* SPS Tunnel */
    { 2877, "bluelance" },                      /* BLUELANCE */
    { 2878, "aap" },                            /* AAP */
    { 2879, "ucentric-ds" },
    { 2880, "synapse" },                        /* Synapse Transport */
    { 2881, "ndsp" },                           /* NDSP */
    { 2882, "ndtp" },                           /* NDTP */
    { 2883, "ndnp" },                           /* NDNP */
    { 2884, "flashmsg" },                       /* Flash Msg */
    { 2885, "topflow" },                        /* TopFlow */
    { 2886, "responselogic" },                  /* RESPONSELOGIC */
    { 2887, "aironetddp" },                     /* aironet */
    { 2888, "spcsdlobby" },                     /* SPCSDLOBBY */
    { 2889, "rsom" },                           /* RSOM */
    { 2890, "cspclmulti" },                     /* CSPCLMULTI */
    { 2891, "cinegrfx-elmd" },                  /* CINEGRFX-ELMD License Manager */
    { 2892, "snifferdata" },                    /* SNIFFERDATA */
    { 2893, "vseconnector" },                   /* VSECONNECTOR */
    { 2894, "abacus-remote" },                  /* ABACUS-REMOTE */
    { 2895, "natuslink" },                      /* NATUS LINK */
    { 2896, "ecovisiong6-1" },                  /* ECOVISIONG6-1 */
    { 2897, "citrix-rtmp" },                    /* Citrix RTMP */
    { 2898, "appliance-cfg" },                  /* APPLIANCE-CFG */
    { 2899, "powergemplus" },                   /* POWERGEMPLUS */
    { 2900, "quicksuite" },                     /* QUICKSUITE */
    { 2901, "allstorcns" },                     /* ALLSTORCNS */
    { 2902, "netaspi" },                        /* NET ASPI */
    { 2903, "suitcase" },                       /* SUITCASE */
    { 2904, "m2ua" },                           /* M2UA */
    { 2906, "caller9" },                        /* CALLER9 */
    { 2907, "webmethods-b2b" },                 /* WEBMETHODS B2B */
    { 2908, "mao" },
    { 2909, "funk-dialout" },                   /* Funk Dialout */
    { 2910, "tdaccess" },                       /* TDAccess */
    { 2911, "blockade" },                       /* Blockade */
    { 2912, "epicon" },                         /* Epicon */
    { 2913, "boosterware" },                    /* Booster Ware */
    { 2914, "gamelobby" },                      /* Game Lobby */
    { 2915, "tksocket" },                       /* TK Socket */
    { 2916, "elvin-server" },                   /* Elvin Server */
    { 2917, "elvin-client" },                   /* Elvin Client */
    { 2918, "kastenchasepad" },                 /* Kasten Chase Pad */
    { 2919, "roboer" },                         /* roboER */
    { 2920, "roboeda" },                        /* roboEDA */
    { 2921, "cesdcdman" },                      /* CESD Contents Delivery Management */
    { 2922, "cesdcdtrn" },                      /* CESD Contents Delivery Data Transfer */
    { 2923, "wta-wsp-wtp-s" },                  /* WTA-WSP-WTP-S */
    { 2924, "precise-vip" },                    /* PRECISE-VIP */
    { 2926, "mobile-file-dl" },                 /* MOBILE-FILE-DL */
    { 2927, "unimobilectrl" },                  /* UNIMOBILECTRL */
    { 2928, "redstone-cpss" },                  /* REDSTONE-CPSS */
    { 2929, "amx-webadmin" },                   /* AMX-WEBADMIN */
    { 2930, "amx-weblinx" },                    /* AMX-WEBLINX */
    { 2931, "circle-x" },                       /* Circle-X */
    { 2932, "incp" },                           /* INCP */
    { 2933, "4-tieropmgw" },                    /* 4-TIER OPM GW */
    { 2934, "4-tieropmcli" },                   /* 4-TIER OPM CLI */
    { 2935, "qtp" },                            /* QTP */
    { 2936, "otpatch" },                        /* OTPatch */
    { 2937, "pnaconsult-lm" },                  /* PNACONSULT-LM */
    { 2938, "sm-pas-1" },                       /* SM-PAS-1 */
    { 2939, "sm-pas-2" },                       /* SM-PAS-2 */
    { 2940, "sm-pas-3" },                       /* SM-PAS-3 */
    { 2941, "sm-pas-4" },                       /* SM-PAS-4 */
    { 2942, "sm-pas-5" },                       /* SM-PAS-5 */
    { 2943, "ttnrepository" },                  /* TTNRepository */
    { 2944, "megaco-h248" },                    /* Megaco H-248 */
    { 2945, "h248-binary" },                    /* H248 Binary */
    { 2946, "fjsvmpor" },                       /* FJSVmpor */
    { 2947, "gpsd" },                           /* GPS Daemon request/response protocol */
    { 2948, "wap-push" },                       /* WAP PUSH */
    { 2949, "wap-pushsecure" },                 /* WAP PUSH SECURE */
    { 2950, "esip" },                           /* ESIP */
    { 2951, "ottp" },                           /* OTTP */
    { 2952, "mpfwsas" },                        /* MPFWSAS */
    { 2953, "ovalarmsrv" },                     /* OVALARMSRV */
    { 2954, "ovalarmsrv-cmd" },                 /* OVALARMSRV-CMD */
    { 2955, "csnotify" },                       /* CSNOTIFY */
    { 2956, "ovrimosdbman" },                   /* OVRIMOSDBMAN */
    { 2957, "jmact5" },                         /* JAMCT5 */
    { 2958, "jmact6" },                         /* JAMCT6 */
    { 2959, "rmopagt" },                        /* RMOPAGT */
    { 2960, "dfoxserver" },                     /* DFOXSERVER */
    { 2961, "boldsoft-lm" },                    /* BOLDSOFT-LM */
    { 2962, "iph-policy-cli" },                 /* IPH-POLICY-CLI */
    { 2963, "iph-policy-adm" },                 /* IPH-POLICY-ADM */
    { 2964, "bullant-srap" },                   /* BULLANT SRAP */
    { 2965, "bullant-rap" },                    /* BULLANT RAP */
    { 2966, "idp-infotrieve" },                 /* IDP-INFOTRIEVE */
    { 2967, "ssc-agent" },                      /* SSC-AGENT */
    { 2968, "enpp" },                           /* ENPP */
    { 2969, "essp" },                           /* ESSP */
    { 2970, "index-net" },                      /* INDEX-NET */
    { 2971, "netclip" },                        /* NetClip clipboard daemon */
    { 2972, "pmsm-webrctl" },                   /* PMSM Webrctl */
    { 2973, "svnetworks" },                     /* SV Networks */
    { 2974, "signal" },                         /* Signal */
    { 2975, "fjmpcm" },                         /* Fujitsu Configuration Management Service */
    { 2976, "cns-srv-port" },                   /* CNS Server Port */
    { 2977, "ttc-etap-ns" },                    /* TTCs Enterprise Test Access Protocol - NS */
    { 2978, "ttc-etap-ds" },                    /* TTCs Enterprise Test Access Protocol - DS */
    { 2979, "h263-video" },                     /* H.263 Video Streaming */
    { 2980, "wimd" },                           /* Instant Messaging Service */
    { 2981, "mylxamport" },                     /* MYLXAMPORT */
    { 2982, "iwb-whiteboard" },                 /* IWB-WHITEBOARD */
    { 2983, "netplan" },                        /* NETPLAN */
    { 2984, "hpidsadmin" },                     /* HPIDSADMIN */
    { 2985, "hpidsagent" },                     /* HPIDSAGENT */
    { 2986, "stonefalls" },                     /* STONEFALLS */
    { 2987, "identify" },
    { 2988, "hippad" },                         /* HIPPA Reporting Protocol */
    { 2989, "zarkov" },                         /* ZARKOV Intelligent Agent Communication */
    { 2990, "boscap" },                         /* BOSCAP */
    { 2991, "wkstn-mon" },                      /* WKSTN-MON */
    { 2992, "avenyo" },                         /* Avenyo Server */
    { 2993, "veritas-vis1" },                   /* VERITAS VIS1 */
    { 2994, "veritas-vis2" },                   /* VERITAS VIS2 */
    { 2995, "idrs" },                           /* IDRS */
    { 2996, "vsixml" },
    { 2997, "rebol" },                          /* REBOL */
    { 2998, "realsecure" },                     /* Real Secure */
    { 2999, "remoteware-un" },                  /* RemoteWare Unassigned */
    { 3000, "hbci" },                           /* HBCI */
    { 3002, "exlm-agent" },                     /* EXLM Agent */
    { 3003, "cgms" },                           /* CGMS */
    { 3004, "csoftragent" },                    /* Csoft Agent */
    { 3005, "geniuslm" },                       /* Genius License Manager */
    { 3006, "ii-admin" },                       /* Instant Internet Admin */
    { 3007, "lotusmtap" },                      /* Lotus Mail Tracking Agent Protocol */
    { 3008, "midnight-tech" },                  /* Midnight Technologies */
    { 3009, "pxc-ntfy" },                       /* PXC-NTFY */
    { 3011, "trusted-web" },                    /* Trusted Web */
    { 3012, "twsdss" },                         /* Trusted Web Client */
    { 3013, "gilatskysurfer" },                 /* Gilat Sky Surfer */
    { 3014, "broker-service" },                 /* Broker Service */
    { 3015, "nati-dstp" },                      /* NATI DSTP */
    { 3016, "notify-srvr" },                    /* Notify Server */
    { 3017, "event-listener" },                 /* Event Listener */
    { 3018, "srvc-registry" },                  /* Service Registry */
    { 3019, "resource-mgr" },                   /* Resource Manager */
    { 3020, "cifs" },                           /* CIFS */
    { 3021, "agriserver" },                     /* AGRI Server */
    { 3022, "csregagent" },                     /* CSREGAGENT */
    { 3023, "magicnotes" },
    { 3024, "nds-sso" },                        /* NDS_SSO */
    { 3025, "arepa-raft" },                     /* Arepa Raft */
    { 3026, "agri-gateway" },                   /* AGRI Gateway */
    { 3027, "LiebDevMgmt-C" },                  /* LiebDevMgmt_C */
    { 3028, "LiebDevMgmt-DM" },                 /* LiebDevMgmt_DM */
    { 3029, "LiebDevMgmt-A" },                  /* LiebDevMgmt_A */
    { 3030, "arepa-cas" },                      /* Arepa Cas */
    { 3031, "eppc" },                           /* Remote AppleEvents/PPC Toolbox */
    { 3032, "redwood-chat" },                   /* Redwood Chat */
    { 3033, "pdb" },                            /* PDB */
    { 3034, "osmosis-aeea" },                   /* Osmosis / Helix (R) AEEA Port */
    { 3035, "fjsv-gssagt" },                    /* FJSV gssagt */
    { 3036, "hagel-dump" },                     /* Hagel DUMP */
    { 3037, "hp-san-mgmt" },                    /* HP SAN Mgmt */
    { 3038, "santak-ups" },                     /* Santak UPS */
    { 3039, "cogitate" },                       /* Cogitate, Inc. */
    { 3040, "tomato-springs" },                 /* Tomato Springs */
    { 3041, "di-traceware" },
    { 3042, "journee" },
    { 3043, "brp" },                            /* Broadcast Routing Protocol */
    { 3044, "epp" },                            /* EndPoint Protocol */
    { 3045, "responsenet" },                    /* ResponseNet */
    { 3046, "di-ase" },
    { 3047, "hlserver" },                       /* Fast Security HL Server */
    { 3048, "pctrader" },                       /* Sierra Net PC Trader */
    { 3049, "nsws" },                           /* NSWS */
    { 3050, "gds-db" },                         /* gds_db */
    { 3051, "galaxy-server" },                  /* Galaxy Server */
    { 3052, "apc-3052" },                       /* APC 3052 */
    { 3053, "dsom-server" },
    { 3054, "amt-cnf-prot" },                   /* AMT CNF PROT */
    { 3055, "policyserver" },                   /* Policy Server */
    { 3056, "cdl-server" },                     /* CDL Server */
    { 3057, "goahead-fldup" },                  /* GoAhead FldUp */
    { 3058, "videobeans" },
    { 3059, "qsoft" },
    { 3060, "interserver" },
    { 3061, "cautcpd" },
    { 3062, "ncacn-ip-tcp" },
    { 3063, "ncadg-ip-udp" },
    { 3064, "rprt" },                           /* Remote Port Redirector */
    { 3065, "slinterbase" },
    { 3066, "netattachsdmp" },                  /* NETATTACHSDMP */
    { 3067, "fjhpjp" },                         /* FJHPJP */
    { 3068, "ls3bcast" },                       /* ls3 Broadcast */
    { 3069, "ls3" },
    { 3070, "mgxswitch" },                      /* MGXSWITCH */
    { 3072, "csd-monitor" },                    /* ContinuStor Monitor Port */
    { 3073, "vcrp" },                           /* Very simple chatroom prot */
    { 3074, "xbox" },                           /* Xbox game port */
    { 3075, "orbix-locator" },                  /* Orbix 2000 Locator */
    { 3076, "orbix-config" },                   /* Orbix 2000 Config */
    { 3077, "orbix-loc-ssl" },                  /* Orbix 2000 Locator SSL */
    { 3078, "orbix-cfg-ssl" },                  /* Orbix 2000 Locator SSL */
    { 3079, "lv-frontpanel" },                  /* LV Front Panel */
    { 3080, "stm-pproc" },                      /* stm_pproc */
    { 3081, "tl1-lv" },                         /* TL1-LV */
    { 3082, "tl1-raw" },                        /* TL1-RAW */
    { 3083, "tl1-telnet" },                     /* TL1-TELNET */
    { 3084, "itm-mccs" },                       /* ITM-MCCS */
    { 3085, "pcihreq" },                        /* PCIHReq */
    { 3086, "jdl-dbkitchen" },                  /* JDL-DBKitchen */
    { 3087, "asoki-sma" },                      /* Asoki SMA */
    { 3088, "xdtp" },                           /* eXtensible Data Transfer Protocol */
    { 3089, "ptk-alink" },                      /* ParaTek Agent Linking */
    { 3090, "stss" },                           /* Senforce Session Services */
    { 3091, "1ci-smcs" },                       /* 1Ci Server Management */
    { 3093, "rapidmq-center" },                 /* Jiiva RapidMQ Center */
    { 3094, "rapidmq-reg" },                    /* Jiiva RapidMQ Registry */
    { 3095, "panasas" },                        /* Panasas rendezvous port */
    { 3096, "ndl-aps" },                        /* Active Print Server Port */
    { 3098, "umm-port" },                       /* Universal Message Manager */
    { 3099, "chmd" },                           /* CHIPSY Machine Daemon */
    { 3100, "opcon-xps" },                      /* OpCon/xps */
    { 3101, "hp-pxpib" },                       /* HP PolicyXpert PIB Server */
    { 3102, "slslavemon" },                     /* SoftlinK Slave Mon Port */
    { 3103, "autocuesmi" },                     /* Autocue SMI Protocol */
    { 3105, "cardbox" },                        /* Cardbox */
    { 3106, "cardbox-http" },                   /* Cardbox HTTP */
    { 3107, "business" },                       /* Business protocol */
    { 3108, "geolocate" },                      /* Geolocate protocol */
    { 3109, "personnel" },                      /* Personnel protocol */
    { 3110, "sim-control" },                    /* simulator control port */
    { 3111, "wsynch" },                         /* Web Synchronous Services */
    { 3112, "ksysguard" },                      /* KDE System Guard */
    { 3113, "cs-auth-svr" },                    /* CS-Authenticate Svr Port */
    { 3114, "ccmad" },                          /* CCM AutoDiscover */
    { 3115, "mctet-master" },                   /* MCTET Master */
    { 3116, "mctet-gateway" },                  /* MCTET Gateway */
    { 3117, "mctet-jserv" },                    /* MCTET Jserv */
    { 3118, "pkagent" },                        /* PKAgent */
    { 3119, "d2000kernel" },                    /* D2000 Kernel Port */
    { 3120, "d2000webserver" },                 /* D2000 Webserver Port */
    { 3122, "vtr-emulator" },                   /* MTI VTR Emulator port */
    { 3123, "edix" },                           /* EDI Translation Protocol */
    { 3124, "beacon-port" },                    /* Beacon Port */
    { 3125, "a13-an" },                         /* A13-AN Interface */
    { 3127, "ctx-bridge" },                     /* CTX Bridge Port */
    { 3128, "ndl-aas" },                        /* Active API Server Port */
    { 3129, "netport-id" },                     /* NetPort Discovery Port */
    { 3130, "icpv2" },                          /* ICPv2 */
    { 3131, "netbookmark" },                    /* Net Book Mark */
    { 3132, "ms-rule-engine" },                 /* Microsoft Business Rule Engine Update Service */
    { 3133, "prism-deploy" },                   /* Prism Deploy User Port */
    { 3134, "ecp" },                            /* Extensible Code Protocol */
    { 3135, "peerbook-port" },                  /* PeerBook Port */
    { 3136, "grubd" },                          /* Grub Server Port */
    { 3137, "rtnt-1" },                         /* rtnt-1 data packets */
    { 3138, "rtnt-2" },                         /* rtnt-2 data packets */
    { 3139, "incognitorv" },                    /* Incognito Rendez-Vous */
    { 3140, "ariliamulti" },                    /* Arilia Multiplexor */
    { 3141, "vmodem" },                         /* VMODEM */
    { 3142, "rdc-wh-eos" },                     /* RDC WH EOS */
    { 3143, "seaview" },                        /* Sea View */
    { 3144, "tarantella" },                     /* Tarantella */
    { 3145, "csi-lfap" },                       /* CSI-LFAP */
    { 3146, "bears-02" },
    { 3147, "rfio" },                           /* RFIO */
    { 3148, "nm-game-admin" },                  /* NetMike Game Administrator */
    { 3149, "nm-game-server" },                 /* NetMike Game Server */
    { 3150, "nm-asses-admin" },                 /* NetMike Assessor Administrator */
    { 3151, "nm-assessor" },                    /* NetMike Assessor */
    { 3152, "feitianrockey" },                  /* FeiTian Port */
    { 3153, "s8-client-port" },                 /* S8Cargo Client Port */
    { 3154, "ccmrmi" },                         /* ON RMI Registry */
    { 3155, "jpegmpeg" },                       /* JpegMpeg Port */
    { 3156, "indura" },                         /* Indura Collector */
    { 3157, "e3consultants" },                  /* CCC Listener Port */
    { 3158, "stvp" },                           /* SmashTV Protocol */
    { 3159, "navegaweb-port" },                 /* NavegaWeb Tarification */
    { 3160, "tip-app-server" },                 /* TIP Application Server */
    { 3161, "doc1lm" },                         /* DOC1 License Manager */
    { 3162, "sflm" },                           /* SFLM */
    { 3163, "res-sap" },                        /* RES-SAP */
    { 3164, "imprs" },                          /* IMPRS */
    { 3165, "newgenpay" },                      /* Newgenpay Engine Service */
    { 3166, "sossecollector" },                 /* Quest Spotlight Out-Of-Process Collector */
    { 3167, "nowcontact" },                     /* Now Contact Public Server */
    { 3168, "poweronnud" },                     /* Now Up-to-Date Public Server */
    { 3169, "serverview-as" },                  /* SERVERVIEW-AS */
    { 3170, "serverview-asn" },                 /* SERVERVIEW-ASN */
    { 3171, "serverview-gf" },                  /* SERVERVIEW-GF */
    { 3172, "serverview-rm" },                  /* SERVERVIEW-RM */
    { 3173, "serverview-icc" },                 /* SERVERVIEW-ICC */
    { 3174, "armi-server" },                    /* ARMI Server */
    { 3175, "t1-e1-over-ip" },                  /* T1_E1_Over_IP */
    { 3176, "ars-master" },                     /* ARS Master */
    { 3177, "phonex-port" },                    /* Phonex Protocol */
    { 3178, "radclientport" },                  /* Radiance UltraEdge Port */
    { 3179, "h2gf-w-2m" },                      /* H2GF W.2m Handover prot. */
    { 3180, "mc-brk-srv" },                     /* Millicent Broker Server */
    { 3181, "bmcpatrolagent" },                 /* BMC Patrol Agent */
    { 3182, "bmcpatrolrnvu" },                  /* BMC Patrol Rendezvous */
    { 3183, "cops-tls" },                       /* COPS/TLS */
    { 3184, "apogeex-port" },                   /* ApogeeX Port */
    { 3185, "smpppd" },                         /* SuSE Meta PPPD */
    { 3186, "iiw-port" },                       /* IIW Monitor User Port */
    { 3187, "odi-port" },                       /* Open Design Listen Port */
    { 3188, "brcm-comm-port" },                 /* Broadcom Port */
    { 3189, "pcle-infex" },                     /* Pinnacle Sys InfEx Port */
    { 3190, "csvr-proxy" },                     /* ConServR Proxy */
    { 3191, "csvr-sslproxy" },                  /* ConServR SSL Proxy */
    { 3192, "firemonrcc" },                     /* FireMon Revision Control */
    { 3193, "spandataport" },                   /* SpanDataPort */
    { 3194, "magbind" },                        /* Rockstorm MAG protocol */
    { 3195, "ncu-1" },                          /* Network Control Unit */
    { 3196, "ncu-2" },                          /* Network Control Unit */
    { 3197, "embrace-dp-s" },                   /* Embrace Device Protocol Server */
    { 3198, "embrace-dp-c" },                   /* Embrace Device Protocol Client */
    { 3199, "dmod-workspace" },                 /* DMOD WorkSpace */
    { 3200, "tick-port" },                      /* Press-sense Tick Port */
    { 3201, "cpq-tasksmart" },                  /* CPQ-TaskSmart */
    { 3202, "intraintra" },                     /* IntraIntra */
    { 3203, "netwatcher-mon" },                 /* Network Watcher Monitor */
    { 3204, "netwatcher-db" },                  /* Network Watcher DB Access */
    { 3205, "isns" },                           /* iSNS Server Port */
    { 3206, "ironmail" },                       /* IronMail POP Proxy */
    { 3207, "vx-auth-port" },                   /* Veritas Authentication Port */
    { 3208, "pfu-prcallback" },                 /* PFU PR Callback */
    { 3209, "netwkpathengine" },                /* HP OpenView Network Path Engine Server */
    { 3210, "flamenco-proxy" },                 /* Flamenco Networks Proxy */
    { 3211, "avsecuremgmt" },                   /* Avocent Secure Management */
    { 3212, "surveyinst" },                     /* Survey Instrument */
    { 3213, "neon24x7" },                       /* NEON 24X7 Mission Control */
    { 3214, "jmq-daemon-1" },                   /* JMQ Daemon Port 1 */
    { 3215, "jmq-daemon-2" },                   /* JMQ Daemon Port 2 */
    { 3216, "ferrari-foam" },                   /* Ferrari electronic FOAM */
    { 3217, "unite" },                          /* Unified IP & Telecom Environment */
    { 3218, "smartpackets" },                   /* EMC SmartPackets */
    { 3219, "wms-messenger" },                  /* WMS Messenger */
    { 3220, "xnm-ssl" },                        /* XML NM over SSL */
    { 3221, "xnm-clear-text" },                 /* XML NM over TCP */
    { 3222, "glbp" },                           /* Gateway Load Balancing Pr */
    { 3223, "digivote" },                       /* DIGIVOTE (R) Vote-Server */
    { 3224, "aes-discovery" },                  /* AES Discovery Port */
    { 3225, "fcip-port" },                      /* FCIP */
    { 3226, "isi-irp" },                        /* ISI Industry Software IRP */
    { 3227, "dwnmshttp" },                      /* DiamondWave NMS Server */
    { 3228, "dwmsgserver" },                    /* DiamondWave MSG Server */
    { 3229, "global-cd-port" },                 /* Global CD Port */
    { 3230, "sftdst-port" },                    /* Software Distributor Port */
    { 3231, "vidigo" },                         /* VidiGo communication (previous was: Delta Solutions Direct) */
    { 3232, "mdtp" },                           /* MDT port */
    { 3233, "whisker" },                        /* WhiskerControl main port */
    { 3234, "alchemy" },                        /* Alchemy Server */
    { 3235, "mdap-port" },                      /* MDAP port */
    { 3236, "apparenet-ts" },                   /* appareNet Test Server */
    { 3237, "apparenet-tps" },                  /* appareNet Test Packet Sequencer */
    { 3238, "apparenet-as" },                   /* appareNet Analysis Server */
    { 3239, "apparenet-ui" },                   /* appareNet User Interface */
    { 3240, "triomotion" },                     /* Trio Motion Control Port */
    { 3241, "sysorb" },                         /* SysOrb Monitoring Server */
    { 3242, "sdp-id-port" },                    /* Session Description ID */
    { 3243, "timelot" },                        /* Timelot Port */
    { 3244, "onesaf" },                         /* OneSAF */
    { 3245, "vieo-fe" },                        /* VIEO Fabric Executive */
    { 3246, "dvt-system" },                     /* DVT SYSTEM PORT */
    { 3247, "dvt-data" },                       /* DVT DATA LINK */
    { 3248, "procos-lm" },                      /* PROCOS LM */
    { 3249, "ssp" },                            /* State Sync Protocol */
    { 3250, "hicp" },                           /* HMS hicp port */
    { 3251, "sysscanner" },                     /* Sys Scanner */
    { 3252, "dhe" },                            /* DHE port */
    { 3253, "pda-data" },                       /* PDA Data */
    { 3254, "pda-sys" },                        /* PDA System */
    { 3255, "semaphore" },                      /* Semaphore Connection Port */
    { 3256, "cpqrpm-agent" },                   /* Compaq RPM Agent Port */
    { 3257, "cpqrpm-server" },                  /* Compaq RPM Server Port */
    { 3258, "ivecon-port" },                    /* Ivecon Server Port */
    { 3259, "epncdp2" },                        /* Epson Network Common Devi */
    { 3260, "iscsi-target" },                   /* iSCSI port */
    { 3261, "winshadow" },                      /* winShadow */
    { 3262, "necp" },                           /* NECP */
    { 3263, "ecolor-imager" },                  /* E-Color Enterprise Imager */
    { 3264, "ccmail" },                         /* cc:mail/lotus */
    { 3265, "altav-tunnel" },                   /* Altav Tunnel */
    { 3266, "ns-cfg-server" },                  /* NS CFG Server */
    { 3267, "ibm-dial-out" },                   /* IBM Dial Out */
    { 3268, "msft-gc" },                        /* Microsoft Global Catalog */
    { 3269, "msft-gc-ssl" },                    /* Microsoft Global Catalog with LDAP/SSL */
    { 3270, "verismart" },                      /* Verismart */
    { 3271, "csoft-prev" },                     /* CSoft Prev Port */
    { 3272, "user-manager" },                   /* Fujitsu User Manager */
    { 3273, "sxmp" },                           /* Simple Extensible Multiplexed Protocol */
    { 3274, "ordinox-server" },                 /* Ordinox Server */
    { 3275, "samd" },                           /* SAMD */
    { 3276, "maxim-asics" },                    /* Maxim ASICs */
    { 3277, "awg-proxy" },                      /* AWG Proxy */
    { 3278, "lkcmserver" },                     /* LKCM Server */
    { 3279, "admind" },
    { 3280, "vs-server" },                      /* VS Server */
    { 3281, "sysopt" },                         /* SYSOPT */
    { 3282, "datusorb" },                       /* Datusorb */
    { 3283, "Apple-Remote-De" },                /* Net Assistant */
    { 3284, "4talk" },                          /* 4Talk */
    { 3285, "plato" },                          /* Plato */
    { 3286, "e-net" },                          /* E-Net */
    { 3287, "directvdata" },                    /* DIRECTVDATA */
    { 3288, "cops" },                           /* COPS */
    { 3289, "enpc" },                           /* ENPC */
    { 3290, "caps-lm" },                        /* CAPS LOGISTICS TOOLKIT - LM */
    { 3291, "sah-lm" },                         /* S A Holditch & Associates - LM */
    { 3292, "cart-o-rama" },                    /* Cart O Rama */
    { 3293, "fg-fps" },
    { 3294, "fg-gip" },
    { 3295, "dyniplookup" },                    /* Dynamic IP Lookup */
    { 3296, "rib-slm" },                        /* Rib License Manager */
    { 3297, "cytel-lm" },                       /* Cytel License Manager */
    { 3298, "deskview" },                       /* DeskView */
    { 3299, "pdrncs" },
    { 3301, "tarantool" },                      /* Tarantool in-memory computing platform */
    { 3302, "mcs-fastmail" },                   /* MCS Fastmail */
    { 3303, "opsession-clnt" },                 /* OP Session Client */
    { 3304, "opsession-srvr" },                 /* OP Session Server */
    { 3305, "odette-ftp" },                     /* ODETTE-FTP */
    { 3306, "mysql" },                          /* MySQL */
    { 3307, "opsession-prxy" },                 /* OP Session Proxy */
    { 3308, "tns-server" },                     /* TNS Server */
    { 3309, "tns-adv" },                        /* TNS ADV */
    { 3310, "dyna-access" },                    /* Dyna Access */
    { 3311, "mcns-tel-ret" },                   /* MCNS Tel Ret */
    { 3312, "appman-server" },                  /* Application Management Server */
    { 3313, "uorb" },                           /* Unify Object Broker */
    { 3314, "uohost" },                         /* Unify Object Host */
    { 3315, "cdid" },                           /* CDID */
    { 3316, "aicc-cmi" },                       /* AICC/CMI */
    { 3317, "vsaiport" },                       /* VSAI PORT */
    { 3318, "ssrip" },                          /* Swith to Swith Routing Information Protocol */
    { 3319, "sdt-lmd" },                        /* SDT License Manager */
    { 3320, "officelink2000" },                 /* Office Link 2000 */
    { 3321, "vnsstr" },                         /* VNSSTR */
    { 3326, "sftu" },                           /* SFTU */
    { 3327, "bbars" },                          /* BBARS */
    { 3328, "egptlm" },                         /* Eaglepoint License Manager */
    { 3329, "hp-device-disc" },                 /* HP Device Disc */
    { 3330, "mcs-calypsoicf" },                 /* MCS Calypso ICF */
    { 3331, "mcs-messaging" },                  /* MCS Messaging */
    { 3332, "mcs-mailsvr" },                    /* MCS Mail Server */
    { 3333, "dec-notes" },                      /* DEC Notes */
    { 3334, "directv-web" },                    /* Direct TV Webcasting */
    { 3335, "directv-soft" },                   /* Direct TV Software Updates */
    { 3336, "directv-tick" },                   /* Direct TV Tickers */
    { 3337, "directv-catlg" },                  /* Direct TV Data Catalog */
    { 3338, "anet-b" },                         /* OMF data b */
    { 3339, "anet-l" },                         /* OMF data l */
    { 3340, "anet-m" },                         /* OMF data m */
    { 3341, "anet-h" },                         /* OMF data h */
    { 3342, "webtie" },                         /* WebTIE */
    { 3343, "ms-cluster-net" },                 /* MS Cluster Net */
    { 3344, "bnt-manager" },                    /* BNT Manager */
    { 3345, "influence" },                      /* Influence */
    { 3346, "trnsprntproxy" },                  /* Trnsprnt Proxy */
    { 3347, "phoenix-rpc" },                    /* Phoenix RPC */
    { 3348, "pangolin-laser" },                 /* Pangolin Laser */
    { 3349, "chevinservices" },                 /* Chevin Services */
    { 3350, "findviatv" },                      /* FINDVIATV */
    { 3351, "btrieve" },                        /* Btrieve port */
    { 3352, "ssql" },                           /* Scalable SQL */
    { 3353, "fatpipe" },                        /* FATPIPE */
    { 3354, "suitjd" },                         /* SUITJD */
    { 3355, "ordinox-dbase" },                  /* Ordinox Dbase */
    { 3356, "upnotifyps" },                     /* UPNOTIFYPS */
    { 3357, "adtech-test" },                    /* Adtech Test IP */
    { 3358, "mpsysrmsvr" },                     /* Mp Sys Rmsvr */
    { 3359, "wg-netforce" },                    /* WG NetForce */
    { 3360, "kv-server" },                      /* KV Server */
    { 3361, "kv-agent" },                       /* KV Agent */
    { 3362, "dj-ilm" },                         /* DJ ILM */
    { 3363, "nati-vi-server" },                 /* NATI Vi Server */
    { 3364, "creativeserver" },                 /* Creative Server */
    { 3365, "contentserver" },                  /* Content Server */
    { 3366, "creativepartnr" },                 /* Creative Partner */
    { 3372, "tip2" },                           /* TIP 2 */
    { 3373, "lavenir-lm" },                     /* Lavenir License Manager */
    { 3374, "cluster-disc" },                   /* Cluster Disc */
    { 3375, "vsnm-agent" },                     /* VSNM Agent */
    { 3376, "cdbroker" },                       /* CD Broker */
    { 3377, "cogsys-lm" },                      /* Cogsys Network License Manager */
    { 3378, "wsicopy" },                        /* WSICOPY */
    { 3379, "socorfs" },                        /* SOCORFS */
    { 3380, "sns-channels" },                   /* SNS Channels */
    { 3381, "geneous" },                        /* Geneous */
    { 3382, "fujitsu-neat" },                   /* Fujitsu Network Enhanced Antitheft function */
    { 3383, "esp-lm" },                         /* Enterprise Software Products License Manager */
    { 3384, "hp-clic" },                        /* Cluster Management Services */
    { 3385, "qnxnetman" },
    { 3387, "backroomnet" },                    /* Back Room Net */
    { 3388, "cbserver" },                       /* CB Server */
    { 3389, "ms-wbt-server" },                  /* MS WBT Server */
    { 3390, "dsc" },                            /* Distributed Service Coordinator */
    { 3391, "savant" },                         /* SAVANT */
    { 3392, "efi-lm" },                         /* EFI License Management */
    { 3393, "d2k-tapestry1" },                  /* D2K Tapestry Client to Server */
    { 3394, "d2k-tapestry2" },                  /* D2K Tapestry Server to Server */
    { 3395, "dyna-lm" },                        /* Dyna License Manager (Elam) */
    { 3396, "printer-agent" },                  /* Printer Agent */
    { 3397, "cloanto-lm" },                     /* Cloanto License Manager */
    { 3398, "mercantile" },                     /* Mercantile */
    { 3399, "csms" },                           /* CSMS */
    { 3400, "csms2" },                          /* CSMS2 */
    { 3401, "filecast" },
    { 3402, "fxaengine-net" },                  /* FXa Engine Network Port */
    { 3405, "nokia-ann-ch1" },                  /* Nokia Announcement ch 1 */
    { 3406, "nokia-ann-ch2" },                  /* Nokia Announcement ch 2 */
    { 3407, "ldap-admin" },                     /* LDAP admin server port */
    { 3408, "BESApi" },                         /* BES Api Port */
    { 3409, "networklens" },                    /* NetworkLens Event Port */
    { 3410, "networklenss" },                   /* NetworkLens SSL Event */
    { 3411, "biolink-auth" },                   /* BioLink Authenteon server */
    { 3412, "xmlblaster" },                     /* xmlBlaster */
    { 3413, "svnet" },                          /* SpecView Networking */
    { 3414, "wip-port" },                       /* BroadCloud WIP Port */
    { 3415, "bcinameservice" },                 /* BCI Name Service */
    { 3416, "commandport" },                    /* AirMobile IS Command Port */
    { 3417, "csvr" },                           /* ConServR file translation */
    { 3418, "rnmap" },                          /* Remote nmap */
    { 3419, "softaudit" },                      /* Isogon SoftAudit */
    { 3420, "ifcp-port" },                      /* iFCP User Port */
    { 3421, "bmap" },                           /* Bull Apprise portmapper */
    { 3422, "rusb-sys-port" },                  /* Remote USB System Port */
    { 3423, "xtrm" },                           /* xTrade Reliable Messaging */
    { 3424, "xtrms" },                          /* xTrade over TLS/SSL */
    { 3425, "agps-port" },                      /* AGPS Access Port */
    { 3426, "arkivio" },                        /* Arkivio Storage Protocol */
    { 3427, "websphere-snmp" },                 /* WebSphere SNMP */
    { 3428, "twcss" },                          /* 2Wire CSS */
    { 3429, "gcsp" },                           /* GCSP user port */
    { 3430, "ssdispatch" },                     /* Scott Studios Dispatch */
    { 3431, "ndl-als" },                        /* Active License Server Port */
    { 3432, "osdcp" },                          /* Secure Device Protocol */
    { 3433, "opnet-smp" },                      /* OPNET Service Management Platform */
    { 3434, "opencm" },                         /* OpenCM Server */
    { 3435, "pacom" },                          /* Pacom Security User Port */
    { 3436, "gc-config" },                      /* GuardControl Exchange Protocol */
    { 3437, "autocueds" },                      /* Autocue Directory Service */
    { 3438, "spiral-admin" },                   /* Spiralcraft Admin */
    { 3439, "hri-port" },                       /* HRI Interface Port */
    { 3440, "ans-console" },                    /* Net Steward Mgmt Console */
    { 3441, "connect-client" },                 /* OC Connect Client */
    { 3442, "connect-server" },                 /* OC Connect Server */
    { 3443, "ov-nnm-websrv" },                  /* OpenView Network Node Manager WEB Server */
    { 3444, "denali-server" },                  /* Denali Server */
    { 3445, "monp" },                           /* Media Object Network Protocol */
    { 3446, "3comfaxrpc" },                     /* 3Com FAX RPC port */
    { 3447, "directnet" },                      /* DirectNet IM System */
    { 3448, "dnc-port" },                       /* Discovery and Net Config */
    { 3449, "hotu-chat" },                      /* HotU Chat */
    { 3450, "castorproxy" },                    /* CAStorProxy */
    { 3451, "asam" },                           /* ASAM Services */
    { 3452, "sabp-signal" },                    /* SABP-Signalling Protocol */
    { 3453, "pscupd" },                         /* PSC Update */
    { 3454, "mira" },                           /* Apple Remote Access Protocol */
    { 3455, "prsvp" },                          /* RSVP Port */
    { 3456, "vat" },                            /* VAT default data */
    { 3457, "vat-control" },                    /* VAT default control */
    { 3458, "d3winosfi" },                      /* D3WinOSFI */
    { 3459, "integral" },                       /* TIP Integral */
    { 3460, "edm-manager" },                    /* EDM Manger */
    { 3461, "edm-stager" },                     /* EDM Stager */
    { 3462, "edm-std-notify" },                 /* EDM STD Notify */
    { 3463, "edm-adm-notify" },                 /* EDM ADM Notify */
    { 3464, "edm-mgr-sync" },                   /* EDM MGR Sync */
    { 3465, "edm-mgr-cntrl" },                  /* EDM MGR Cntrl */
    { 3466, "workflow" },                       /* WORKFLOW */
    { 3467, "rcst" },                           /* RCST */
    { 3468, "ttcmremotectrl" },                 /* TTCM Remote Controll */
    { 3469, "pluribus" },                       /* Pluribus */
    { 3470, "jt400" },
    { 3471, "jt400-ssl" },
    { 3472, "jaugsremotec-1" },                 /* JAUGS N-G Remotec 1 */
    { 3473, "jaugsremotec-2" },                 /* JAUGS N-G Remotec 2 */
    { 3474, "ttntspauto" },                     /* TSP Automation */
    { 3475, "genisar-port" },                   /* Genisar Comm Port */
    { 3476, "nppmp" },                          /* NVIDIA Mgmt Protocol */
    { 3477, "ecomm" },                          /* eComm link port */
    { 3478, "stun" },                           /* Session Traversal Utilities for NAT (STUN) port */
    { 3479, "twrpc" },                          /* 2Wire RPC */
    { 3480, "plethora" },                       /* Secure Virtual Workspace */
    { 3481, "cleanerliverc" },                  /* CleanerLive remote ctrl */
    { 3482, "vulture" },                        /* Vulture Monitoring System */
    { 3483, "slim-devices" },                   /* Slim Devices Protocol */
    { 3484, "gbs-stp" },                        /* GBS SnapTalk Protocol */
    { 3485, "celatalk" },                       /* CelaTalk */
    { 3486, "ifsf-hb-port" },                   /* IFSF Heartbeat Port */
    { 3488, "fs-rh-srv" },                      /* FS Remote Host Server */
    { 3489, "dtp-dia" },                        /* DTP/DIA */
    { 3490, "colubris" },                       /* Colubris Management Port */
    { 3491, "swr-port" },                       /* SWR Port */
    { 3492, "tvdumtray-port" },                 /* TVDUM Tray Port */
    { 3493, "nut" },                            /* Network UPS Tools */
    { 3494, "ibm3494" },                        /* IBM 3494 */
    { 3495, "seclayer-tcp" },                   /* securitylayer over tcp */
    { 3496, "seclayer-tls" },                   /* securitylayer over tls */
    { 3497, "ipether232port" },                 /* ipEther232Port */
    { 3498, "dashpas-port" },                   /* DASHPAS user port */
    { 3499, "sccip-media" },                    /* SccIP Media */
    { 3500, "rtmp-port" },                      /* RTMP Port */
    { 3501, "isoft-p2p" },                      /* iSoft-P2P */
    { 3502, "avinstalldisc" },                  /* Avocent Install Discovery */
    { 3503, "lsp-ping" },                       /* MPLS LSP-echo Port */
    { 3504, "ironstorm" },                      /* IronStorm game server */
    { 3505, "ccmcomm" },                        /* CCM communications port */
    { 3506, "apc-3506" },                       /* APC 3506 */
    { 3507, "nesh-broker" },                    /* Nesh Broker Port */
    { 3508, "interactionweb" },                 /* Interaction Web */
    { 3509, "vt-ssl" },                         /* Virtual Token SSL Port */
    { 3510, "xss-port" },                       /* XSS Port */
    { 3511, "webmail-2" },                      /* WebMail/2 */
    { 3512, "aztec" },                          /* Aztec Distribution Port */
    { 3513, "arcpd" },                          /* Adaptec Remote Protocol */
    { 3514, "must-p2p" },                       /* MUST Peer to Peer */
    { 3515, "must-backplane" },                 /* MUST Backplane */
    { 3516, "smartcard-port" },                 /* Smartcard Port */
    { 3517, "802-11-iapp" },                    /* IEEE 802.11 WLANs WG IAPP */
    { 3518, "artifact-msg" },                   /* Artifact Message Server */
    { 3520, "galileolog" },                     /* Netvion Galileo Log Port */
    { 3521, "mc3ss" },                          /* Telequip Labs MC3SS */
    { 3522, "nssocketport" },                   /* DO over NSSocketPort */
    { 3523, "odeumservlink" },                  /* Odeum Serverlink */
    { 3524, "ecmport" },                        /* ECM Server port */
    { 3525, "eisport" },                        /* EIS Server port */
    { 3526, "starquiz-port" },                  /* starQuiz Port */
    { 3527, "beserver-msg-q" },                 /* VERITAS Backup Exec Server */
    { 3528, "jboss-iiop" },                     /* JBoss IIOP */
    { 3529, "jboss-iiop-ssl" },                 /* JBoss IIOP/SSL */
    { 3530, "gf" },                             /* Grid Friendly */
    { 3531, "joltid" },                         /* Joltid */
    { 3532, "raven-rmp" },                      /* Raven Remote Management Control */
    { 3533, "raven-rdp" },                      /* Raven Remote Management Data */
    { 3534, "urld-port" },                      /* URL Daemon Port */
    { 3535, "ms-la" },                          /* MS-LA */
    { 3536, "snac" },                           /* SNAC */
    { 3537, "ni-visa-remote" },                 /* Remote NI-VISA port */
    { 3538, "ibm-diradm" },                     /* IBM Directory Server */
    { 3539, "ibm-diradm-ssl" },                 /* IBM Directory Server SSL */
    { 3540, "pnrp-port" },                      /* PNRP User Port */
    { 3541, "voispeed-port" },                  /* VoiSpeed Port */
    { 3542, "hacl-monitor" },                   /* HA cluster monitor */
    { 3543, "qftest-lookup" },                  /* qftest Lookup Port */
    { 3544, "teredo" },                         /* Teredo Port */
    { 3545, "camac" },                          /* CAMAC equipment */
    { 3547, "symantec-sim" },                   /* Symantec SIM */
    { 3548, "interworld" },                     /* Interworld */
    { 3549, "tellumat-nms" },                   /* Tellumat MDR NMS */
    { 3550, "ssmpp" },                          /* Secure SMPP */
    { 3551, "apcupsd" },                        /* Apcupsd Information Port */
    { 3552, "taserver" },                       /* TeamAgenda Server Port */
    { 3553, "rbr-discovery" },                  /* Red Box Recorder ADP */
    { 3554, "questnotify" },                    /* Quest Notification Server */
    { 3555, "razor" },                          /* Vipul's Razor */
    { 3556, "sky-transport" },                  /* Sky Transport Protocol */
    { 3557, "personalos-001" },                 /* PersonalOS Comm Port */
    { 3558, "mcp-port" },                       /* MCP user port */
    { 3559, "cctv-port" },                      /* CCTV control port */
    { 3560, "iniserve-port" },                  /* INIServe port */
    { 3561, "bmc-onekey" },                     /* BMC-OneKey */
    { 3562, "sdbproxy" },                       /* SDBProxy */
    { 3563, "watcomdebug" },                    /* Watcom Debug */
    { 3564, "esimport" },                       /* Electromed SIM port */
    { 3567, "dof-eps" },                        /* DOF Protocol Stack */
    { 3568, "dof-tunnel-sec" },                 /* DOF Secure Tunnel */
    { 3569, "mbg-ctrl" },                       /* Meinberg Control Service */
    { 3570, "mccwebsvr-port" },                 /* MCC Web Server Port */
    { 3571, "megardsvr-port" },                 /* MegaRAID Server Port */
    { 3572, "megaregsvrport" },                 /* Registration Server Port */
    { 3573, "tag-ups-1" },                      /* Advantage Group UPS Suite */
    { 3575, "ccm-port" },                       /* Coalsere CCM Port */
    { 3576, "cmc-port" },                       /* Coalsere CMC Port */
    { 3577, "config-port" },                    /* Configuration Port */
    { 3578, "data-port" },                      /* Data Port */
    { 3579, "ttat3lb" },                        /* Tarantella Load Balancing */
    { 3580, "nati-svrloc" },                    /* NATI-ServiceLocator */
    { 3581, "kfxaclicensing" },                 /* Ascent Capture Licensing */
    { 3582, "press" },                          /* PEG PRESS Server */
    { 3583, "canex-watch" },                    /* CANEX Watch System */
    { 3584, "u-dbap" },                         /* U-DBase Access Protocol */
    { 3585, "emprise-lls" },                    /* Emprise License Server */
    { 3586, "emprise-lsc" },                    /* License Server Console */
    { 3587, "p2pgroup" },                       /* Peer to Peer Grouping */
    { 3588, "sentinel" },                       /* Sentinel Server */
    { 3589, "isomair" },
    { 3590, "wv-csp-sms" },                     /* WV CSP SMS Binding */
    { 3591, "gtrack-server" },                  /* LOCANIS G-TRACK Server */
    { 3592, "gtrack-ne" },                      /* LOCANIS G-TRACK NE Port */
    { 3593, "bpmd" },                           /* BP Model Debugger */
    { 3594, "mediaspace" },                     /* MediaSpace */
    { 3595, "shareapp" },                       /* ShareApp */
    { 3596, "iw-mmogame" },                     /* Illusion Wireless MMOG */
    { 3597, "a14" },                            /* A14 (AN-to-SC/MM) */
    { 3598, "a15" },                            /* A15 (AN-to-AN) */
    { 3599, "quasar-server" },                  /* Quasar Accounting Server */
    { 3600, "trap-daemon" },                    /* text relay-answer */
    { 3601, "visinet-gui" },                    /* Visinet Gui */
    { 3602, "infiniswitchcl" },                 /* InfiniSwitch Mgr Client */
    { 3603, "int-rcv-cntrl" },                  /* Integrated Rcvr Control */
    { 3604, "bmc-jmx-port" },                   /* BMC JMX Port */
    { 3605, "comcam-io" },                      /* ComCam IO Port */
    { 3606, "splitlock" },                      /* Splitlock Server */
    { 3607, "precise-i3" },                     /* Precise I3 */
    { 3608, "trendchip-dcp" },                  /* Trendchip control protocol */
    { 3609, "cpdi-pidas-cm" },                  /* CPDI PIDAS Connection Mon */
    { 3610, "echonet" },                        /* ECHONET */
    { 3611, "six-degrees" },                    /* Six Degrees Port */
    { 3612, "dataprotector" },                  /* Micro Focus Data Protector */
    { 3613, "alaris-disc" },                    /* Alaris Device Discovery */
    { 3614, "sigma-port" },                     /* Satchwell Sigma */
    { 3615, "start-network" },                  /* Start Messaging Network */
    { 3616, "cd3o-protocol" },                  /* cd3o Control Protocol */
    { 3617, "sharp-server" },                   /* ATI SHARP Logic Engine */
    { 3618, "aairnet-1" },                      /* AAIR-Network 1 */
    { 3619, "aairnet-2" },                      /* AAIR-Network 2 */
    { 3620, "ep-pcp" },                         /* EPSON Projector Control Port */
    { 3621, "ep-nsp" },                         /* EPSON Network Screen Port */
    { 3622, "ff-lr-port" },                     /* FF LAN Redundancy Port */
    { 3623, "haipe-discover" },                 /* HAIPIS Dynamic Discovery */
    { 3624, "dist-upgrade" },                   /* Distributed Upgrade Port */
    { 3625, "volley" },                         /* Volley */
    { 3626, "bvcdaemon-port" },                 /* bvControl Daemon */
    { 3627, "jamserverport" },                  /* Jam Server Port */
    { 3628, "ept-machine" },                    /* EPT Machine Interface */
    { 3629, "escvpnet" },                       /* ESC/VP.net */
    { 3630, "cs-remote-db" },                   /* C&S Remote Database Port */
    { 3631, "cs-services" },                    /* C&S Web Services Port */
    { 3632, "distcc" },                         /* distributed compiler */
    { 3633, "wacp" },                           /* Wyrnix AIS port */
    { 3634, "hlibmgr" },                        /* hNTSP Library Manager */
    { 3635, "sdo" },                            /* Simple Distributed Objects */
    { 3636, "servistaitsm" },                   /* SerVistaITSM */
    { 3637, "scservp" },                        /* Customer Service Port */
    { 3638, "ehp-backup" },                     /* EHP Backup Protocol */
    { 3639, "xap-ha" },                         /* Extensible Automation */
    { 3640, "netplay-port1" },                  /* Netplay Port 1 */
    { 3641, "netplay-port2" },                  /* Netplay Port 2 */
    { 3642, "juxml-port" },                     /* Juxml Replication port */
    { 3643, "audiojuggler" },                   /* AudioJuggler */
    { 3644, "ssowatch" },
    { 3645, "cyc" },                            /* Cyc */
    { 3646, "xss-srv-port" },                   /* XSS Server Port */
    { 3647, "splitlock-gw" },                   /* Splitlock Gateway */
    { 3648, "fjcp" },                           /* Fujitsu Cooperation Port */
    { 3649, "nmmp" },                           /* Nishioka Miyuki Msg Protocol */
    { 3650, "prismiq-plugin" },                 /* PRISMIQ VOD plug-in */
    { 3651, "xrpc-registry" },                  /* XRPC Registry */
    { 3652, "vxcrnbuport" },                    /* VxCR NBU Default Port */
    { 3653, "tsp" },                            /* Tunnel Setup Protocol */
    { 3654, "vaprtm" },                         /* VAP RealTime Messenger */
    { 3655, "abatemgr" },                       /* ActiveBatch Exec Agent */
    { 3656, "abatjss" },                        /* ActiveBatch Job Scheduler */
    { 3657, "immedianet-bcn" },                 /* ImmediaNet Beacon */
    { 3658, "ps-ams" },                         /* PlayStation AMS (Secure) */
    { 3659, "apple-sasl" },                     /* Apple SASL */
    { 3660, "can-nds-ssl" },                    /* IBM Tivoli Directory Service using SSL */
    { 3661, "can-ferret-ssl" },                 /* IBM Tivoli Directory Service using SSL */
    { 3662, "pserver" },
    { 3663, "dtp" },                            /* DIRECWAY Tunnel Protocol */
    { 3664, "ups-engine" },                     /* UPS Engine Port */
    { 3665, "ent-engine" },                     /* Enterprise Engine Port */
    { 3666, "eserver-pap" },                    /* IBM eServer PAP */
    { 3667, "infoexch" },                       /* IBM Information Exchange */
    { 3668, "dell-rm-port" },                   /* Dell Remote Management */
    { 3669, "casanswmgmt" },                    /* CA SAN Switch Management */
    { 3670, "smile" },                          /* SMILE TCP/UDP Interface */
    { 3671, "efcp" },                           /* e Field Control (EIBnet) */
    { 3672, "lispworks-orb" },                  /* LispWorks ORB */
    { 3673, "mediavault-gui" },                 /* Openview Media Vault GUI */
    { 3674, "wininstall-ipc" },                 /* WinINSTALL IPC Port */
    { 3675, "calltrax" },                       /* CallTrax Data Port */
    { 3676, "va-pacbase" },                     /* VisualAge Pacbase server */
    { 3677, "roverlog" },                       /* RoverLog IPC */
    { 3678, "ipr-dglt" },                       /* DataGuardianLT */
    { 3679, "Escale-(Newton" },                 /* Newton Dock */
    { 3680, "npds-tracker" },                   /* NPDS Tracker */
    { 3681, "bts-x73" },                        /* BTS X73 Port */
    { 3682, "cas-mapi" },                       /* EMC SmartPackets-MAPI */
    { 3683, "bmc-ea" },                         /* BMC EDV/EA */
    { 3684, "faxstfx-port" },                   /* FAXstfX */
    { 3685, "dsx-agent" },                      /* DS Expert Agent */
    { 3686, "tnmpv2" },                         /* Trivial Network Management */
    { 3687, "simple-push" },
    { 3688, "simple-push-s" },                  /* simple-push Secure */
    { 3689, "daap" },                           /* Digital Audio Access Protocol (iTunes) */
    { 3690, "svn" },                            /* Subversion */
    { 3691, "magaya-network" },                 /* Magaya Network Port */
    { 3692, "intelsync" },                      /* Brimstone IntelSync */
    { 3695, "bmc-data-coll" },                  /* BMC Data Collection */
    { 3696, "telnetcpcd" },                     /* Telnet Com Port Control */
    { 3697, "nw-license" },                     /* NavisWorks License System */
    { 3698, "sagectlpanel" },                   /* SAGECTLPANEL */
    { 3699, "kpn-icw" },                        /* Internet Call Waiting */
    { 3700, "lrs-paging" },                     /* LRS NetPage */
    { 3701, "netcelera" },                      /* NetCelera */
    { 3702, "ws-discovery" },                   /* Web Service Discovery */
    { 3703, "adobeserver-3" },                  /* Adobe Server 3 */
    { 3704, "adobeserver-4" },                  /* Adobe Server 4 */
    { 3705, "adobeserver-5" },                  /* Adobe Server 5 */
    { 3706, "rt-event" },                       /* Real-Time Event Port */
    { 3707, "rt-event-s" },                     /* Real-Time Event Secure Port */
    { 3708, "sun-as-iiops" },                   /* Sun App Svr - Naming */
    { 3709, "ca-idms" },                        /* CA-IDMS Server */
    { 3710, "portgate-auth" },                  /* PortGate Authentication */
    { 3711, "edb-server2" },                    /* EBD Server 2 */
    { 3712, "sentinel-ent" },                   /* Sentinel Enterprise */
    { 3713, "tftps" },                          /* TFTP over TLS */
    { 3714, "delos-dms" },                      /* DELOS Direct Messaging */
    { 3715, "anoto-rendezv" },                  /* Anoto Rendezvous Port */
    { 3716, "wv-csp-sms-cir" },                 /* WV CSP SMS CIR Channel */
    { 3717, "wv-csp-udp-cir" },                 /* WV CSP UDP/IP CIR Channel */
    { 3718, "opus-services" },                  /* OPUS Server Port */
    { 3719, "itelserverport" },                 /* iTel Server Port */
    { 3720, "ufastro-instr" },                  /* UF Astro. Instr. Services */
    { 3721, "xsync" },                          /* Xsync */
    { 3722, "xserveraid" },                     /* Xserve RAID */
    { 3723, "sychrond" },                       /* Sychron Service Daemon */
    { 3724, "blizwow" },                        /* World of Warcraft */
    { 3725, "na-er-tip" },                      /* Netia NA-ER Port */
    { 3726, "array-manager" },                  /* Xyratex Array Manager */
    { 3727, "e-mdu" },                          /* Ericsson Mobile Data Unit */
    { 3728, "e-woa" },                          /* Ericsson Web on Air */
    { 3729, "fksp-audit" },                     /* Fireking Audit Port */
    { 3730, "client-ctrl" },                    /* Client Control */
    { 3731, "smap" },                           /* Service Manager */
    { 3732, "m-wnn" },                          /* Mobile Wnn */
    { 3733, "multip-msg" },                     /* Multipuesto Msg Port */
    { 3734, "synel-data" },                     /* Synel Data Collection Port */
    { 3735, "pwdis" },                          /* Password Distribution */
    { 3736, "rs-rmi" },                         /* RealSpace RMI */
    { 3738, "versatalk" },                      /* versaTalk Server Port */
    { 3739, "launchbird-lm" },                  /* Launchbird LicenseManager */
    { 3740, "heartbeat" },                      /* Heartbeat Protocol */
    { 3741, "wysdma" },                         /* WysDM Agent */
    { 3742, "cst-port" },                       /* CST - Configuration & Service Tracker */
    { 3743, "ipcs-command" },                   /* IP Control Systems Ltd. */
    { 3744, "sasg" },                           /* SASG */
    { 3745, "gw-call-port" },                   /* GWRTC Call Port */
    { 3746, "linktest" },                       /* LXPRO.COM LinkTest */
    { 3747, "linktest-s" },                     /* LXPRO.COM LinkTest SSL */
    { 3748, "webdata" },                        /* webData */
    { 3749, "cimtrak" },                        /* CimTrak */
    { 3750, "cbos-ip-port" },                   /* CBOS/IP ncapsalation port */
    { 3751, "gprs-cube" },                      /* CommLinx GPRS Cube */
    { 3752, "vipremoteagent" },                 /* Vigil-IP RemoteAgent */
    { 3753, "nattyserver" },                    /* NattyServer Port */
    { 3754, "timestenbroker" },                 /* TimesTen Broker Port */
    { 3755, "sas-remote-hlp" },                 /* SAS Remote Help Server */
    { 3756, "canon-capt" },                     /* Canon CAPT Port */
    { 3757, "grf-port" },                       /* GRF Server Port */
    { 3758, "apw-registry" },                   /* apw RMI registry */
    { 3759, "exapt-lmgr" },                     /* Exapt License Manager */
    { 3760, "adtempusclient" },                 /* adTempus Client */
    { 3761, "gsakmp" },                         /* gsakmp port */
    { 3762, "gbs-smp" },                        /* GBS SnapMail Protocol */
    { 3763, "xo-wave" },                        /* XO Wave Control Port */
    { 3764, "mni-prot-rout" },                  /* MNI Protected Routing */
    { 3765, "rtraceroute" },                    /* Remote Traceroute */
    { 3767, "listmgr-port" },                   /* ListMGR Port */
    { 3768, "rblcheckd" },                      /* rblcheckd server daemon */
    { 3769, "haipe-otnk" },                     /* HAIPE Network Keying */
    { 3770, "cindycollab" },                    /* Cinderella Collaboration */
    { 3771, "paging-port" },                    /* RTP Paging Port */
    { 3772, "ctp" },                            /* Chantry Tunnel Protocol */
    { 3773, "ctdhercules" },
    { 3774, "zicom" },                          /* ZICOM */
    { 3775, "ispmmgr" },                        /* ISPM Manager Port */
    { 3776, "dvcprov-port" },                   /* Device Provisioning Port */
    { 3777, "jibe-eb" },                        /* Jibe EdgeBurst */
    { 3778, "c-h-it-port" },                    /* Cutler-Hammer IT Port */
    { 3779, "cognima" },                        /* Cognima Replication */
    { 3780, "nnp" },                            /* Nuzzler Network Protocol */
    { 3781, "abcvoice-port" },                  /* ABCvoice server port */
    { 3782, "iso-tp0s" },                       /* Secure ISO TP0 port */
    { 3783, "bim-pem" },                        /* Impact Mgr./PEM Gateway */
    { 3784, "bfd-control" },                    /* BFD Control Protocol */
    { 3785, "bfd-echo" },                       /* BFD Echo Protocol */
    { 3786, "upstriggervsw" },                  /* VSW Upstrigger port */
    { 3787, "fintrx" },                         /* Fintrx */
    { 3788, "isrp-port" },                      /* SPACEWAY Routing port */
    { 3789, "remotedeploy" },                   /* RemoteDeploy Administration Port [July 2003] */
    { 3790, "quickbooksrds" },                  /* QuickBooks RDS */
    { 3791, "tvnetworkvideo" },                 /* TV NetworkVideo Data port */
    { 3792, "sitewatch" },                      /* e-Watch Corporation SiteWatch */
    { 3793, "dcsoftware" },                     /* DataCore Software */
    { 3794, "jaus" },                           /* JAUS Robots */
    { 3795, "myblast" },                        /* myBLAST Mekentosj port */
    { 3796, "spw-dialer" },                     /* Spaceway Dialer */
    { 3797, "idps" },
    { 3798, "minilock" },                       /* Minilock */
    { 3799, "radius-dynauth" },                 /* RADIUS Dynamic Authorization */
    { 3800, "pwgpsi" },                         /* Print Services Interface */
    { 3801, "ibm-mgr" },                        /* ibm manager service */
    { 3802, "vhd" },                            /* VHD */
    { 3803, "soniqsync" },                      /* SoniqSync */
    { 3804, "iqnet-port" },                     /* Harman IQNet Port */
    { 3805, "tcpdataserver" },                  /* ThorGuard Server Port */
    { 3806, "wsmlb" },                          /* Remote System Manager */
    { 3807, "spugna" },                         /* SpuGNA Communication Port */
    { 3808, "sun-as-iiops-ca" },                /* Sun App Svr-IIOPClntAuth */
    { 3809, "apocd" },                          /* Java Desktop System Configuration Agent */
    { 3810, "wlanauth" },                       /* WLAN AS server */
    { 3811, "amp" },                            /* AMP */
    { 3812, "neto-wol-server" },                /* netO WOL Server */
    { 3813, "rap-ip" },                         /* Rhapsody Interface Protocol */
    { 3814, "neto-dcs" },                       /* netO DCS */
    { 3815, "lansurveyorxml" },                 /* LANsurveyor XML */
    { 3816, "sunlps-http" },                    /* Sun Local Patch Server */
    { 3817, "tapeware" },                       /* Yosemite Tech Tapeware */
    { 3818, "crinis-hb" },                      /* Crinis Heartbeat */
    { 3819, "epl-slp" },                        /* EPL Sequ Layer Protocol */
    { 3820, "scp" },                            /* Siemens AuD SCP */
    { 3821, "pmcp" },                           /* ATSC PMCP Standard */
    { 3822, "acp-discovery" },                  /* Compute Pool Discovery */
    { 3823, "acp-conduit" },                    /* Compute Pool Conduit */
    { 3824, "acp-policy" },                     /* Compute Pool Policy */
    { 3825, "ffserver" },                       /* Antera FlowFusion Process Simulation */
    { 3826, "warmux" },                         /* WarMUX game server */
    { 3827, "netmpi" },                         /* Netadmin Systems MPI service */
    { 3828, "neteh" },                          /* Netadmin Systems Event Handler */
    { 3829, "neteh-ext" },                      /* Netadmin Systems Event Handler External */
    { 3830, "cernsysmgmtagt" },                 /* Cerner System Management Agent */
    { 3831, "dvapps" },                         /* Docsvault Application Service */
    { 3832, "xxnetserver" },                    /* xxNETserver */
    { 3833, "aipn-auth" },                      /* AIPN LS Authentication */
    { 3834, "spectardata" },                    /* Spectar Data Stream Service */
    { 3835, "spectardb" },                      /* Spectar Database Rights Service */
    { 3836, "markem-dcp" },                     /* MARKEM NEXTGEN DCP */
    { 3837, "mkm-discovery" },                  /* MARKEM Auto-Discovery */
    { 3838, "sos" },                            /* Scito Object Server */
    { 3839, "amx-rms" },                        /* AMX Resource Management Suite */
    { 3840, "flirtmitmir" },                    /* www.FlirtMitMir.de */
    { 3842, "nhci" },                           /* NHCI status port */
    { 3843, "quest-agent" },                    /* Quest Common Agent */
    { 3844, "rnm" },                            /* RNM */
    { 3845, "v-one-spp" },                      /* V-ONE Single Port Proxy */
    { 3846, "an-pcp" },                         /* Astare Network PCP */
    { 3847, "msfw-control" },                   /* MS Firewall Control */
    { 3848, "item" },                           /* IT Environmental Monitor */
    { 3849, "spw-dnspreload" },                 /* SPACEWAY DNS Preload */
    { 3850, "qtms-bootstrap" },                 /* QTMS Bootstrap Protocol */
    { 3851, "spectraport" },                    /* SpectraTalk Port */
    { 3852, "sse-app-config" },                 /* SSE App Configuration */
    { 3853, "sscan" },                          /* SONY scanning protocol */
    { 3854, "stryker-com" },                    /* Stryker Comm Port */
    { 3855, "opentrac" },                       /* OpenTRAC */
    { 3856, "informer" },                       /* INFORMER */
    { 3857, "trap-port" },                      /* Trap Port */
    { 3858, "trap-port-mom" },                  /* Trap Port MOM */
    { 3859, "nav-port" },                       /* Navini Port */
    { 3860, "sasp" },                           /* Server/Application State Protocol (SASP) */
    { 3861, "winshadow-hd" },                   /* winShadow Host Discovery */
    { 3862, "giga-pocket" },                    /* GIGA-POCKET */
    { 3865, "xpl" },                            /* xpl automation protocol */
    { 3866, "dzdaemon" },                       /* Sun SDViz DZDAEMON Port */
    { 3867, "dzoglserver" },                    /* Sun SDViz DZOGLSERVER Port */
    { 3869, "ovsam-mgmt" },                     /* hp OVSAM MgmtServer Disco */
    { 3870, "ovsam-d-agent" },                  /* hp OVSAM HostAgent Disco */
    { 3871, "avocent-adsap" },                  /* Avocent DS Authorization */
    { 3872, "oem-agent" },                      /* OEM Agent */
    { 3873, "fagordnc" },
    { 3874, "sixxsconfig" },                    /* SixXS Configuration */
    { 3875, "pnbscada" },                       /* PNBSCADA */
    { 3876, "dl-agent" },                       /* DirectoryLockdown Agent */
    { 3877, "xmpcr-interface" },                /* XMPCR Interface Port */
    { 3878, "fotogcad" },                       /* FotoG CAD interface */
    { 3879, "appss-lm" },                       /* appss license manager */
    { 3880, "igrs" },                           /* IGRS */
    { 3881, "idac" },                           /* Data Acquisition and Control */
    { 3882, "msdts1" },                         /* DTS Service Port */
    { 3883, "vrpn" },                           /* VR Peripheral Network */
    { 3884, "softrack-meter" },                 /* SofTrack Metering */
    { 3885, "topflow-ssl" },                    /* TopFlow SSL */
    { 3886, "nei-management" },                 /* NEI management port */
    { 3887, "ciphire-data" },                   /* Ciphire Data Transport */
    { 3888, "ciphire-serv" },                   /* Ciphire Services */
    { 3889, "dandv-tester" },                   /* D and V Tester Control Port */
    { 3890, "ndsconnect" },                     /* Niche Data Server Connect */
    { 3891, "rtc-pm-port" },                    /* Oracle RTC-PM port */
    { 3892, "pcc-image-port" },                 /* PCC-image-port */
    { 3893, "cgi-starapi" },                    /* CGI StarAPI Server */
    { 3894, "syam-agent" },                     /* SyAM Agent Port */
    { 3895, "syam-smc" },                       /* SyAm SMC Service Port */
    { 3896, "sdo-tls" },                        /* Simple Distributed Objects over TLS */
    { 3897, "sdo-ssh" },                        /* Simple Distributed Objects over SSH */
    { 3898, "senip" },                          /* IAS, Inc. SmartEye NET Internet Protocol */
    { 3899, "itv-control" },                    /* ITV Port */
    { 3900, "udt-os" },                         /* Unidata UDT OS */
    { 3901, "nimsh" },                          /* NIM Service Handler */
    { 3902, "nimaux" },                         /* NIMsh Auxiliary Port */
    { 3903, "charsetmgr" },                     /* CharsetMGR */
    { 3904, "omnilink-port" },                  /* Arnet Omnilink Port */
    { 3905, "mupdate" },                        /* Mailbox Update (MUPDATE) protocol */
    { 3906, "topovista-data" },                 /* TopoVista elevation data */
    { 3907, "imoguia-port" },                   /* Imoguia Port */
    { 3908, "hppronetman" },                    /* HP Procurve NetManagement */
    { 3909, "surfcontrolcpa" },                 /* SurfControl CPA */
    { 3910, "prnrequest" },                     /* Printer Request Port */
    { 3911, "prnstatus" },                      /* Printer Status Port */
    { 3912, "gbmt-stars" },                     /* Global Maintech Stars */
    { 3913, "listcrt-port" },                   /* ListCREATOR Port */
    { 3914, "listcrt-port-2" },                 /* ListCREATOR Port 2 */
    { 3915, "agcat" },                          /* Auto-Graphics Cataloging */
    { 3916, "wysdmc" },                         /* WysDM Controller */
    { 3917, "aftmux" },                         /* AFT multiplex port */
    { 3918, "pktcablemmcops" },                 /* PacketCableMultimediaCOPS */
    { 3919, "hyperip" },                        /* HyperIP */
    { 3920, "exasoftport1" },                   /* Exasoft IP Port */
    { 3921, "herodotus-net" },                  /* Herodotus Net */
    { 3922, "sor-update" },                     /* Soronti Update Port */
    { 3923, "symb-sb-port" },                   /* Symbian Service Broker */
    { 3924, "mpl-gprs-port" },                  /* MPL_GPRS_PORT */
    { 3925, "zmp" },                            /* Zoran Media Port */
    { 3926, "winport" },                        /* WINPort */
    { 3927, "natdataservice" },                 /* ScsTsr */
    { 3928, "netboot-pxe" },                    /* PXE NetBoot Manager */
    { 3929, "smauth-port" },                    /* AMS Port */
    { 3930, "syam-webserver" },                 /* Syam Web Server Port */
    { 3931, "msr-plugin-port" },                /* MSR Plugin Port */
    { 3932, "dyn-site" },                       /* Dynamic Site System */
    { 3933, "plbserve-port" },                  /* PL/B App Server User Port */
    { 3934, "sunfm-port" },                     /* PL/B File Manager Port */
    { 3935, "sdp-portmapper" },                 /* SDP Port Mapper Protocol */
    { 3936, "mailprox" },                       /* Mailprox */
    { 3937, "dvbservdsc" },                     /* DVB Service Discovery */
    { 3938, "dbcontrol-agent" },                /* Oracle dbControl Agent po */
    { 3939, "aamp" },                           /* Anti-virus Application Management Port */
    { 3940, "xecp-node" },                      /* XeCP Node Service */
    { 3941, "homeportal-web" },                 /* Home Portal Web Server */
    { 3942, "srdp" },                           /* satellite distribution */
    { 3943, "tig" },                            /* TetraNode Ip Gateway */
    { 3944, "sops" },                           /* S-Ops Management */
    { 3945, "emcads" },                         /* EMCADS Server Port */
    { 3946, "backupedge" },                     /* BackupEDGE Server */
    { 3947, "ccp" },                            /* Connect and Control Protocol for Consumer, Commercial, and Industrial Electronic Devices */
    { 3948, "apdap" },                          /* Anton Paar Device Administration Protocol */
    { 3949, "drip" },                           /* Dynamic Routing Information Protocol */
    { 3950, "namemunge" },                      /* Name Munging */
    { 3951, "pwgippfax" },                      /* PWG IPP Facsimile */
    { 3952, "i3-sessionmgr" },                  /* I3 Session Manager */
    { 3953, "xmlink-connect" },                 /* Eydeas XMLink Connect */
    { 3954, "adrep" },                          /* AD Replication RPC */
    { 3955, "p2pcommunity" },                   /* p2pCommunity */
    { 3956, "gvcp" },                           /* GigE Vision Control */
    { 3957, "mqe-broker" },                     /* MQEnterprise Broker */
    { 3958, "mqe-agent" },                      /* MQEnterprise Agent */
    { 3959, "treehopper" },                     /* Tree Hopper Networking */
    { 3960, "bess" },                           /* Bess Peer Assessment */
    { 3961, "proaxess" },                       /* ProAxess Server */
    { 3962, "sbi-agent" },                      /* SBI Agent Protocol */
    { 3963, "thrp" },                           /* Teran Hybrid Routing Protocol */
    { 3964, "sasggprs" },                       /* SASG GPRS */
    { 3965, "ati-ip-to-ncpe" },                 /* Avanti IP to NCPE API */
    { 3966, "bflckmgr" },                       /* BuildForge Lock Manager */
    { 3967, "ppsms" },                          /* PPS Message Service */
    { 3968, "ianywhere-dbns" },                 /* iAnywhere DBNS */
    { 3969, "landmarks" },                      /* Landmark Messages */
    { 3970, "lanrevagent" },                    /* LANrev Agent */
    { 3971, "lanrevserver" },                   /* LANrev Server */
    { 3972, "iconp" },                          /* ict-control Protocol */
    { 3973, "progistics" },                     /* ConnectShip Progistics */
    { 3974, "xk22" },                           /* Remote Applicant Tracking Service */
    { 3975, "airshot" },                        /* Air Shot */
    { 3976, "opswagent" },                      /* Server Automation Agent */
    { 3977, "opswmanager" },                    /* Opsware Manager */
    { 3978, "secure-cfg-svr" },                 /* Secured Configuration Server */
    { 3979, "smwan" },                          /* Smith Micro Wide Area Network Service */
    { 3981, "starfish" },                       /* Starfish System Admin */
    { 3982, "eis" },                            /* ESRI Image Server */
    { 3983, "eisp" },                           /* ESRI Image Service */
    { 3984, "mapper-nodemgr" },                 /* MAPPER network node manager */
    { 3985, "mapper-mapethd" },                 /* MAPPER TCP/IP server */
    { 3986, "mapper-ws-ethd" },                 /* MAPPER workstation server */
    { 3987, "centerline" },                     /* Centerline */
    { 3988, "dcs-config" },                     /* DCS Configuration Port */
    { 3989, "bv-queryengine" },                 /* BindView-Query Engine */
    { 3990, "bv-is" },                          /* BindView-IS */
    { 3991, "bv-smcsrv" },                      /* BindView-SMCServer */
    { 3992, "bv-ds" },                          /* BindView-DirectoryServer */
    { 3993, "bv-agent" },                       /* BindView-Agent */
    { 3995, "iss-mgmt-ssl" },                   /* ISS Management Svcs SSL */
    { 3996, "abcsoftware" },                    /* abcsoftware-01 */
    { 3997, "agentsease-db" },                  /* aes_db */
    { 3998, "dnx" },                            /* Distributed Nagios Executor Service */
    { 3999, "nvcnet" },                         /* Norman distributes scanning service */
    { 4000, "terabase" },                       /* Terabase */
    { 4001, "newoak" },                         /* NewOak */
    { 4002, "pxc-spvr-ft" },
    { 4003, "pxc-splr-ft" },
    { 4004, "pxc-roid" },
    { 4005, "pxc-pin" },
    { 4006, "pxc-spvr" },
    { 4007, "pxc-splr" },
    { 4008, "netcheque" },                      /* NetCheque accounting */
    { 4009, "chimera-hwm" },                    /* Chimera HWM */
    { 4010, "samsung-unidex" },                 /* Samsung Unidex */
    { 4011, "altserviceboot" },                 /* Alternate Service Boot */
    { 4012, "pda-gate" },                       /* PDA Gate */
    { 4013, "acl-manager" },                    /* ACL Manager */
    { 4014, "taiclock" },                       /* TAICLOCK */
    { 4015, "talarian-mcast1" },                /* Talarian Mcast */
    { 4016, "talarian-mcast2" },                /* Talarian Mcast */
    { 4017, "talarian-mcast3" },                /* Talarian Mcast */
    { 4018, "talarian-mcast4" },                /* Talarian Mcast */
    { 4019, "talarian-mcast5" },                /* Talarian Mcast */
    { 4020, "trap" },                           /* TRAP Port */
    { 4021, "nexus-portal" },                   /* Nexus Portal */
    { 4022, "dnox" },                           /* DNOX */
    { 4023, "esnm-zoning" },                    /* ESNM Zoning Port */
    { 4024, "tnp1-port" },                      /* TNP1 User Port */
    { 4025, "partimage" },                      /* Partition Image Port */
    { 4026, "as-debug" },                       /* Graphical Debug Server */
    { 4027, "bxp" },                            /* bitxpress */
    { 4028, "dtserver-port" },                  /* DTServer Port */
    { 4029, "ip-qsig" },                        /* IP Q signaling protocol */
    { 4030, "jdmn-port" },                      /* Accell/JSP Daemon Port */
    { 4031, "suucp" },                          /* UUCP over SSL */
    { 4032, "vrts-auth-port" },                 /* VERITAS Authorization Service */
    { 4033, "sanavigator" },                    /* SANavigator Peer Port */
    { 4034, "ubxd" },                           /* Ubiquinox Daemon */
    { 4035, "wap-push-http" },                  /* WAP Push OTA-HTTP port */
    { 4036, "wap-push-https" },                 /* WAP Push OTA-HTTP secure */
    { 4037, "ravehd" },                         /* RaveHD network control */
    { 4038, "fazzt-ptp" },                      /* Fazzt Point-To-Point */
    { 4039, "fazzt-admin" },                    /* Fazzt Administration */
    { 4040, "yo-main" },                        /* Yo.net main service */
    { 4041, "houston" },                        /* Rocketeer-Houston */
    { 4042, "ldxp" },                           /* LDXP */
    { 4043, "nirp" },                           /* Neighbour Identity Resolution */
    { 4044, "ltp" },                            /* Location Tracking Protocol */
    { 4045, "npp" },                            /* Network Paging Protocol */
    { 4046, "acp-proto" },                      /* Accounting Protocol */
    { 4047, "ctp-state" },                      /* Context Transfer Protocol */
    { 4049, "wafs" },                           /* Wide Area File Services */
    { 4050, "cisco-wafs" },                     /* Wide Area File Services */
    { 4051, "cppdp" },                          /* Cisco Peer to Peer Distribution Protocol */
    { 4052, "interact" },                       /* VoiceConnect Interact */
    { 4053, "ccu-comm-1" },                     /* CosmoCall Universe Communications Port 1 */
    { 4054, "ccu-comm-2" },                     /* CosmoCall Universe Communications Port 2 */
    { 4055, "ccu-comm-3" },                     /* CosmoCall Universe Communications Port 3 */
    { 4056, "lms" },                            /* Location Message Service */
    { 4057, "wfm" },                            /* Servigistics WFM server */
    { 4058, "kingfisher" },                     /* Kingfisher protocol */
    { 4059, "dlms-cosem" },                     /* DLMS/COSEM */
    { 4060, "dsmeter-iatc" },                   /* DSMETER Inter-Agent Transfer Channel */
    { 4061, "ice-location" },                   /* Ice Location Service (TCP) */
    { 4062, "ice-slocation" },                  /* Ice Location Service (SSL) */
    { 4063, "ice-router" },                     /* Ice Firewall Traversal Service (TCP) */
    { 4064, "ice-srouter" },                    /* Ice Firewall Traversal Service (SSL) */
    { 4065, "avanti-cdp" },                     /* Avanti Common Data */
    { 4066, "pmas" },                           /* Performance Measurement and Analysis */
    { 4067, "idp" },                            /* Information Distribution Protocol */
    { 4068, "ipfltbcst" },                      /* IP Fleet Broadcast */
    { 4069, "minger" },                         /* Minger Email Address Validation Service */
    { 4070, "tripe" },                          /* Trivial IP Encryption (TrIPE) */
    { 4071, "aibkup" },                         /* Automatically Incremental Backup */
    { 4072, "zieto-sock" },                     /* Zieto Socket Communications */
    { 4073, "iRAPP" },                          /* Interactive Remote Application Pairing Protocol */
    { 4074, "cequint-cityid" },                 /* Cequint City ID UI trigger */
    { 4075, "perimlan" },                       /* ISC Alarm Message Service */
    { 4076, "seraph" },                         /* Seraph DCS */
    { 4079, "santools" },                       /* SANtools Diagnostic Server */
    { 4080, "lorica-in" },                      /* Lorica inside facing */
    { 4081, "lorica-in-sec" },                  /* Lorica inside facing (SSL) */
    { 4082, "lorica-out" },                     /* Lorica outside facing */
    { 4083, "lorica-out-sec" },                 /* Lorica outside facing (SSL) */
    { 4089, "opencore" },                       /* OpenCORE Remote Control Service */
    { 4090, "omasgport" },                      /* OMA BCAST Service Guide */
    { 4091, "ewinstaller" },                    /* EminentWare Installer */
    { 4092, "ewdgs" },                          /* EminentWare DGS */
    { 4093, "pvxpluscs" },                      /* Pvx Plus CS Host */
    { 4094, "sysrqd" },                         /* sysrq daemon */
    { 4095, "xtgui" },                          /* xtgui information service */
    { 4096, "bre" },                            /* BRE (Bridge Relay Element) */
    { 4097, "patrolview" },                     /* Patrol View */
    { 4098, "drmsfsd" },
    { 4099, "dpcp" },                           /* DPCP */
    { 4100, "igo-incognito" },                  /* IGo Incognito Data Port */
    { 4101, "brlp-0" },                         /* Braille protocol */
    { 4102, "brlp-1" },                         /* Braille protocol */
    { 4103, "brlp-2" },                         /* Braille protocol */
    { 4104, "brlp-3" },                         /* Braille protocol */
    { 4105, "shofar" },                         /* Shofar */
    { 4106, "synchronite" },                    /* Synchronite */
    { 4107, "j-ac" },                           /* JDL Accounting LAN Service */
    { 4108, "accel" },                          /* ACCEL */
    { 4109, "izm" },                            /* Instantiated Zero-control Messaging */
    { 4110, "g2tag" },                          /* G2 RFID Tag Telemetry Data */
    { 4111, "xgrid" },                          /* Xgrid */
    { 4112, "apple-vpns-rp" },                  /* Apple VPN Server Reporting Protocol */
    { 4113, "aipn-reg" },                       /* AIPN LS Registration */
    { 4114, "jomamqmonitor" },                  /* JomaMQMonitor */
    { 4115, "cds" },                            /* CDS Transfer Agent */
    { 4116, "smartcard-tls" },                  /* smartcard-TLS */
    { 4117, "hillrserv" },                      /* Hillr Connection Manager */
    { 4118, "netscript" },                      /* Netadmin Systems NETscript service */
    { 4119, "assuria-slm" },                    /* Assuria Log Manager */
    { 4121, "e-builder" },                      /* e-Builder Application Communication */
    { 4122, "fprams" },                         /* Fiber Patrol Alarm Service */
    { 4123, "z-wave" },                         /* Z-Wave Protocol */
    { 4124, "tigv2" },                          /* Rohill TetraNode Ip Gateway v2 */
    { 4125, "opsview-envoy" },                  /* Opsview Envoy */
    { 4126, "ddrepl" },                         /* Data Domain Replication Service */
    { 4127, "unikeypro" },                      /* NetUniKeyServer */
    { 4128, "nufw" },                           /* NuFW decision delegation protocol */
    { 4129, "nuauth" },                         /* NuFW authentication protocol */
    { 4130, "fronet" },                         /* FRONET message protocol */
    { 4131, "stars" },                          /* Global Maintech Stars */
    { 4132, "nuts-dem" },                       /* NUTS Daemon */
    { 4133, "nuts-bootp" },                     /* NUTS Bootp Server */
    { 4134, "nifty-hmi" },                      /* NIFTY-Serve HMI protocol */
    { 4135, "cl-db-attach" },                   /* Classic Line Database Server Attach */
    { 4136, "cl-db-request" },                  /* Classic Line Database Server Request */
    { 4137, "cl-db-remote" },                   /* Classic Line Database Server Remote */
    { 4138, "nettest" },
    { 4139, "thrtx" },                          /* Imperfect Networks Server */
    { 4140, "cedros-fds" },                     /* Cedros Fraud Detection System */
    { 4141, "oirtgsvc" },                       /* Workflow Server */
    { 4142, "oidocsvc" },                       /* Document Server */
    { 4143, "oidsr" },                          /* Document Replication */
    { 4145, "vvr-control" },                    /* VVR Control */
    { 4146, "tgcconnect" },                     /* TGCConnect Beacon */
    { 4147, "vrxpservman" },                    /* Multum Service Manager */
    { 4148, "hhb-handheld" },                   /* HHB Handheld Client */
    { 4149, "agslb" },                          /* A10 GSLB Service */
    { 4150, "PowerAlert-nsa" },                 /* PowerAlert Network Shutdown Agent */
    { 4151, "menandmice-noh" },                 /* Men & Mice Remote Control */
    { 4152, "idig-mux" },                       /* iDigTech Multiplex */
    { 4153, "mbl-battd" },                      /* MBL Remote Battery Monitoring */
    { 4154, "atlinks" },                        /* atlinks device discovery */
    { 4155, "bzr" },                            /* Bazaar version control system */
    { 4156, "stat-results" },                   /* STAT Results */
    { 4157, "stat-scanner" },                   /* STAT Scanner Control */
    { 4158, "stat-cc" },                        /* STAT Command Center */
    { 4159, "nss" },                            /* Network Security Service */
    { 4160, "jini-discovery" },                 /* Jini Discovery */
    { 4161, "omscontact" },                     /* OMS Contact */
    { 4162, "omstopology" },                    /* OMS Topology */
    { 4163, "silverpeakpeer" },                 /* Silver Peak Peer Protocol */
    { 4164, "silverpeakcomm" },                 /* Silver Peak Communication Protocol */
    { 4165, "altcp" },                          /* ArcLink over Ethernet */
    { 4166, "joost" },                          /* Joost Peer to Peer Protocol */
    { 4167, "ddgn" },                           /* DeskDirect Global Network */
    { 4168, "pslicser" },                       /* PrintSoft License Server */
    { 4172, "pcoip" },                          /* PC over IP */
    { 4177, "wello" },                          /* Wello P2P pubsub service */
    { 4178, "storman" },                        /* StorMan */
    { 4179, "MaxumSP" },                        /* Maxum Services */
    { 4180, "httpx" },                          /* HTTPX */
    { 4181, "macbak" },                         /* MacBak */
    { 4182, "pcptcpservice" },                  /* Production Company Pro TCP Service */
    { 4183, "cyborgnet" },                      /* CyborgNet communications protocol */
    { 4184, "universe-suite" },                 /* UNIVERSE SUITE MESSAGE SERVICE */
    { 4185, "wcpp" },                           /* Woven Control Plane Protocol */
    { 4188, "vatata" },                         /* Vatata Peer to Peer Protocol */
    { 4195, "aws-wsp" },                        /* AWS protocol for cloud remoting solution */
    { 4197, "hctl" },                           /* Harman HControl Protocol */
    { 4199, "eims-admin" },                     /* EIMS ADMIN */
    { 4300, "corelccam" },                      /* Corel CCam */
    { 4301, "d-data" },                         /* Diagnostic Data */
    { 4302, "d-data-control" },                 /* Diagnostic Data Control */
    { 4303, "srcp" },                           /* Simple Railroad Command Protocol */
    { 4304, "owserver" },                       /* One-Wire Filesystem Server */
    { 4305, "batman" },                         /* better approach to mobile ad-hoc networking */
    { 4306, "pinghgl" },                        /* Hellgate London */
    { 4307, "trueconf" },                       /* TrueConf Videoconference Service */
    { 4308, "compx-lockview" },                 /* CompX-LockView */
    { 4309, "dserver" },                        /* Exsequi Appliance Discovery */
    { 4310, "mirrtex" },                        /* Mir-RT exchange service */
    { 4319, "fox-skytale" },                    /* Fox SkyTale encrypted communication */
    { 4320, "fdt-rcatp" },                      /* FDT Remote Categorization Protocol */
    { 4321, "rwhois" },                         /* Remote Who Is */
    { 4322, "trim-event" },                     /* TRIM Event Service */
    { 4323, "trim-ice" },                       /* TRIM ICE Service */
    { 4326, "geognosis" },                      /* Cadcorp GeognoSIS */
    { 4327, "jaxer-web" },                      /* Jaxer Web Protocol */
    { 4328, "jaxer-manager" },                  /* Jaxer Manager Command Protocol */
    { 4333, "ahsp" },                           /* ArrowHead Service Protocol (AHSP) */
    { 4340, "gaia" },                           /* Gaia Connector Protocol */
    { 4343, "unicall" },                        /* UNICALL */
    { 4344, "vinainstall" },                    /* VinaInstall */
    { 4345, "m4-network-as" },                  /* Macro 4 Network AS */
    { 4346, "elanlm" },                         /* ELAN LM */
    { 4347, "lansurveyor" },                    /* LAN Surveyor */
    { 4348, "itose" },                          /* ITOSE */
    { 4349, "fsportmap" },                      /* File System Port Map */
    { 4350, "net-device" },                     /* Net Device */
    { 4351, "plcy-net-svcs" },                  /* PLCY Net Services */
    { 4352, "pjlink" },                         /* Projector Link */
    { 4353, "f5-iquery" },                      /* F5 iQuery */
    { 4354, "qsnet-trans" },                    /* QSNet Transmitter */
    { 4355, "qsnet-workst" },                   /* QSNet Workstation */
    { 4356, "qsnet-assist" },                   /* QSNet Assistant */
    { 4357, "qsnet-cond" },                     /* QSNet Conductor */
    { 4358, "qsnet-nucl" },                     /* QSNet Nucleus */
    { 4359, "omabcastltkm" },                   /* OMA BCAST Long-Term Key Messages */
    { 4368, "wxbrief" },                        /* WeatherBrief Direct */
    { 4369, "epmd" },                           /* Erlang Port Mapper Daemon */
    { 4370, "elpro-tunnel" },                   /* ELPRO V2 Protocol Tunnel */
    { 4372, "l2c-data" },                       /* LAN2CAN Data */
    { 4373, "remctl" },                         /* Remote Authenticated Command Service */
    { 4375, "tolteces" },                       /* Toltec EasyShare */
    { 4376, "bip" },                            /* BioAPI Interworking */
    { 4377, "cp-spxsvr" },                      /* Cambridge Pixel SPx Server */
    { 4378, "cp-spxdpy" },                      /* Cambridge Pixel SPx Display */
    { 4379, "ctdb" },                           /* CTDB */
    { 4389, "xandros-cms" },                    /* Xandros Community Management Service */
    { 4390, "wiegand" },                        /* Physical Access Control */
    { 4395, "omnivisionesx" },                  /* OmniVision communication for Virtual environments */
    { 4400, "ds-srv" },                         /* ASIGRA Services */
    { 4401, "ds-srvr" },                        /* ASIGRA Televaulting DS-System Service */
    { 4402, "ds-clnt" },                        /* ASIGRA Televaulting DS-Client Service */
    { 4403, "ds-user" },                        /* ASIGRA Televaulting DS-Client Monitoring/Management */
    { 4404, "ds-admin" },                       /* ASIGRA Televaulting DS-System Monitoring/Management */
    { 4405, "ds-mail" },                        /* ASIGRA Televaulting Message Level Restore service */
    { 4406, "ds-slp" },                         /* ASIGRA Televaulting DS-Sleeper Service */
    { 4420, "nvme" },                           /* NVM Express over Fabrics storage access */
    { 4425, "netrockey6" },                     /* NetROCKEY6 SMART Plus Service */
    { 4426, "beacon-port-2" },                  /* SMARTS Beacon Port */
    { 4430, "rsqlserver" },                     /* REAL SQL Server */
    { 4432, "l-acoustics" },                    /* L-ACOUSTICS management */
    { 4442, "saris" },                          /* Saris */
    { 4443, "pharos" },                         /* Pharos */
    { 4444, "krb524" },                         /* KRB524 */
    { 4445, "upnotifyp" },                      /* UPNOTIFYP */
    { 4446, "n1-fwp" },                         /* N1-FWP */
    { 4447, "n1-rmgmt" },                       /* N1-RMGMT */
    { 4448, "asc-slmd" },                       /* ASC Licence Manager */
    { 4449, "privatewire" },                    /* PrivateWire */
    { 4450, "camp" },                           /* Common ASCII Messaging Protocol */
    { 4451, "ctisystemmsg" },                   /* CTI System Msg */
    { 4452, "ctiprogramload" },                 /* CTI Program Load */
    { 4453, "nssalertmgr" },                    /* NSS Alert Manager */
    { 4454, "nssagentmgr" },                    /* NSS Agent Manager */
    { 4455, "prchat-user" },                    /* PR Chat User */
    { 4456, "prchat-server" },                  /* PR Chat Server */
    { 4457, "prRegister" },                     /* PR Register */
    { 4458, "mcp" },                            /* Matrix Configuration Protocol */
    { 4484, "hpssmgmt" },                       /* hpssmgmt service */
    { 4486, "icms" },                           /* Integrated Client Message Service */
    { 4488, "awacs-ice" },                      /* Apple Wide Area Connectivity Service ICE Bootstrap */
    { 4500, "ipsec-nat-t" },                    /* IPsec NAT-Traversal */
    { 4535, "ehs" },                            /* Event Heap Server */
    { 4536, "ehs-ssl" },                        /* Event Heap Server SSL */
    { 4537, "wssauthsvc" },                     /* WSS Security Service */
    { 4538, "swx-gate" },                       /* Software Data Exchange Gateway */
    { 4545, "worldscores" },                    /* WorldScores */
    { 4546, "sf-lm" },                          /* SF License Manager (Sentinel) */
    { 4547, "lanner-lm" },                      /* Lanner License Manager */
    { 4548, "synchromesh" },                    /* Synchromesh */
    { 4549, "aegate" },                         /* Aegate PMR Service */
    { 4550, "gds-adppiw-db" },                  /* Perman I Interbase Server */
    { 4551, "ieee-mih" },                       /* MIH Services */
    { 4552, "menandmice-mon" },                 /* Men and Mice Monitoring */
    { 4554, "msfrs" },                          /* MS FRS Replication */
    { 4555, "rsip" },                           /* RSIP Port */
    { 4556, "dtn-bundle" },                     /* DTN Bundle TCP CL Protocol */
    { 4559, "hylafax" },                        /* HylaFAX */
    { 4566, "kwtc" },                           /* Kids Watch Time Control Service */
    { 4567, "tram" },                           /* TRAM */
    { 4568, "bmc-reporting" },                  /* BMC Reporting */
    { 4569, "iax" },                            /* Inter-Asterisk eXchange */
    { 4591, "l3t-at-an" },                      /* HRPD L3T (AT-AN) */
    { 4593, "ipt-anri-anri" },                  /* IPT (ANRI-ANRI) */
    { 4594, "ias-session" },                    /* IAS-Session (ANRI-ANRI) */
    { 4595, "ias-paging" },                     /* IAS-Paging (ANRI-ANRI) */
    { 4596, "ias-neighbor" },                   /* IAS-Neighbor (ANRI-ANRI) */
    { 4597, "a21-an-1xbs" },                    /* A21 (AN-1xBS) */
    { 4598, "a16-an-an" },                      /* A16 (AN-AN) */
    { 4599, "a17-an-an" },                      /* A17 (AN-AN) */
    { 4600, "piranha1" },                       /* Piranha1 */
    { 4601, "piranha2" },                       /* Piranha2 */
    { 4646, "dots-signal" },                    /* Distributed Denial-of-Service Open Threat Signaling (DOTS) Signal Channel Protocol. The service name is used to construct the SRV service names "_dots-signal._udp" and "_dots-signal._tcp" for discovering DOTS servers used to establish DOTS signal channel. */
    { 4658, "playsta2-app" },                   /* PlayStation2 App Port */
    { 4659, "playsta2-lob" },                   /* PlayStation2 Lobby Port */
    { 4660, "smaclmgr" },
    { 4661, "kar2ouche" },                      /* Kar2ouche Peer location service */
    { 4662, "oms" },                            /* OrbitNet Message Service */
    { 4663, "noteit" },                         /* Note It! Message Service */
    { 4664, "ems" },                            /* Rimage Messaging Server */
    { 4665, "contclientms" },                   /* Container Client Message Service */
    { 4666, "eportcomm" },                      /* E-Port Message Service */
    { 4667, "mmacomm" },                        /* MMA Comm Services */
    { 4668, "mmaeds" },                         /* MMA EDS Service */
    { 4669, "eportcommdata" },                  /* E-Port Data Service */
    { 4670, "light" },                          /* Light packets transfer protocol */
    { 4671, "acter" },                          /* Bull RSF action server */
    { 4672, "rfa" },                            /* remote file access server */
    { 4673, "cxws" },                           /* CXWS Operations */
    { 4674, "appiq-mgmt" },                     /* AppIQ Agent Management */
    { 4675, "dhct-status" },                    /* BIAP Device Status */
    { 4676, "dhct-alerts" },                    /* BIAP Generic Alert */
    { 4677, "bcs" },                            /* Business Continuity Servi */
    { 4678, "traversal" },                      /* boundary traversal */
    { 4679, "mgesupervision" },                 /* MGE UPS Supervision */
    { 4680, "mgemanagement" },                  /* MGE UPS Management */
    { 4681, "parliant" },                       /* Parliant Telephony System */
    { 4682, "finisar" },
    { 4683, "spike" },                          /* Spike Clipboard Service */
    { 4684, "rfid-rp1" },                       /* RFID Reader Protocol 1.0 */
    { 4685, "autopac" },                        /* Autopac Protocol */
    { 4686, "msp-os" },                         /* Manina Service Protocol */
    { 4687, "nst" },                            /* Network Scanner Tool FTP */
    { 4688, "mobile-p2p" },                     /* Mobile P2P Service */
    { 4689, "altovacentral" },                  /* Altova DatabaseCentral */
    { 4690, "prelude" },                        /* Prelude IDS message proto */
    { 4691, "mtn" },                            /* monotone Netsync Protocol */
    { 4692, "conspiracy" },                     /* Conspiracy messaging */
    { 4700, "netxms-agent" },                   /* NetXMS Agent */
    { 4701, "netxms-mgmt" },                    /* NetXMS Management */
    { 4702, "netxms-sync" },                    /* NetXMS Server Synchronization */
    { 4711, "trinity-dist" },                   /* Trinity Trust Network Node Communication */
    { 4725, "truckstar" },                      /* TruckStar Service */
    { 4728, "capmux" },                         /* CA Port Multiplexer */
    { 4730, "gearman" },                        /* Gearman Job Queue System */
    { 4737, "ipdr-sp" },                        /* IPDR/SP */
    { 4738, "solera-lpn" },                     /* SoleraTec Locator */
    { 4739, "ipfix" },                          /* IP Flow Info Export */
    { 4740, "ipfixs" },                         /* ipfix protocol over TLS */
    { 4741, "lumimgrd" },                       /* Luminizer Manager */
    { 4743, "openhpid" },                       /* openhpi HPI service */
    { 4744, "ifsp" },                           /* Internet File Synchronization Protocol */
    { 4745, "fmp" },                            /* Funambol Mobile Push */
    { 4749, "profilemac" },                     /* Profile for Mac */
    { 4750, "ssad" },                           /* Simple Service Auto Discovery */
    { 4751, "spocp" },                          /* Simple Policy Control Protocol */
    { 4752, "snap" },                           /* Simple Network Audio Protocol */
    { 4784, "bfd-multi-ctl" },                  /* BFD Multihop Control */
    { 4792, "unified-bus" },                    /* IP Routable Unified Bus */
    { 4800, "iims" },                           /* Icona Instant Messenging System */
    { 4801, "iwec" },                           /* Icona Web Embedded Chat */
    { 4802, "ilss" },                           /* Icona License System Server */
    { 4827, "htcp" },                           /* HTCP */
    { 4837, "varadero-0" },                     /* Varadero-0 */
    { 4838, "varadero-1" },                     /* Varadero-1 */
    { 4839, "varadero-2" },                     /* Varadero-2 */
    { 4841, "quosa" },                          /* QUOSA Virtual Library Service */
    { 4842, "gw-asv" },                         /* nCode ICE-flow Library AppServer */
    { 4843, "opcua-tls" },                      /* OPC UA TCP Protocol over TLS/SSL */
    { 4844, "gw-log" },                         /* nCode ICE-flow Library LogServer */
    { 4845, "wcr-remlib" },                     /* WordCruncher Remote Library Service */
    { 4846, "contamac-icm" },                   /* Contamac ICM Service */
    { 4847, "wfc" },                            /* Web Fresh Communication */
    { 4848, "appserv-http" },                   /* App Server - Admin HTTP */
    { 4849, "appserv-https" },                  /* App Server - Admin HTTPS */
    { 4850, "sun-as-nodeagt" },                 /* Sun App Server - NA */
    { 4851, "derby-repli" },                    /* Apache Derby Replication */
    { 4867, "unify-debug" },                    /* Unify Debugger */
    { 4868, "phrelay" },                        /* Photon Relay */
    { 4869, "phrelaydbg" },                     /* Photon Relay Debug */
    { 4870, "cc-tracking" },                    /* Citcom Tracking Service */
    { 4871, "wired" },                          /* Wired */
    { 4876, "tritium-can" },                    /* Tritium CAN Bus Bridge Service */
    { 4877, "lmcs" },                           /* Lighting Management Control System */
    { 4884, "hivestor" },                       /* HiveStor Distributed File System */
    { 4885, "abbs" },                           /* ABBS */
    { 4894, "lyskom" },                         /* LysKOM Protocol A */
    { 4899, "radmin-port" },                    /* RAdmin Port */
    { 4900, "hfcs" },                           /* HFSQL Client/Server Database Engine */
    { 4914, "bones" },                          /* Bones Remote Control */
    { 4940, "eq-office-4940" },                 /* Equitrac Office */
    { 4941, "eq-office-4941" },                 /* Equitrac Office */
    { 4942, "eq-office-4942" },                 /* Equitrac Office */
    { 4949, "munin" },                          /* Munin Graphing Framework */
    { 4950, "sybasesrvmon" },                   /* Sybase Server Monitor */
    { 4951, "pwgwims" },                        /* PWG WIMS */
    { 4952, "sagxtsds" },                       /* SAG Directory Server */
    { 4969, "ccss-qmm" },                       /* CCSS QMessageMonitor */
    { 4970, "ccss-qsm" },                       /* CCSS QSystemMonitor */
    { 4986, "mrip" },                           /* Model Railway Interface Program */
    { 4987, "smar-se-port1" },                  /* SMAR Ethernet Port 1 */
    { 4988, "smar-se-port2" },                  /* SMAR Ethernet Port 2 */
    { 4989, "parallel" },                       /* Parallel for GAUSS (tm) */
    { 4990, "busycal" },                        /* BusySync Calendar Synch. Protocol */
    { 4991, "vrt" },                            /* VITA Radio Transport */
    { 4999, "hfcs-manager" },                   /* HFSQL Client/Server Database Engine Manager */
    { 5000, "commplex-main" },
    { 5001, "commplex-link" },
    { 5002, "rfe" },                            /* radio free ethernet */
    { 5003, "fmpro-internal" },                 /* FileMaker, Inc. - Proprietary transport */
    { 5004, "avt-profile-1" },                  /* RTP media data */
    { 5005, "avt-profile-2" },                  /* RTP control protocol */
    { 5006, "wsm-server" },
    { 5007, "wsm-server-ssl" },
    { 5008, "synapsis-edge" },                  /* Synapsis EDGE */
    { 5009, "winfs" },                          /* Microsoft Windows Filesystem */
    { 5010, "telelpathstart" },                 /* TelepathStart */
    { 5011, "telelpathattack" },                /* TelepathAttack */
    { 5012, "nsp" },                            /* NetOnTap Service */
    { 5013, "fmpro-v6" },                       /* FileMaker, Inc. - Proprietary transport */
    { 5020, "zenginkyo-1" },
    { 5021, "zenginkyo-2" },
    { 5022, "mice" },                           /* mice server */
    { 5023, "htuilsrv" },                       /* Htuil Server for PLD2 */
    { 5024, "scpi-telnet" },                    /* SCPI-TELNET */
    { 5025, "scpi-raw" },                       /* SCPI-RAW */
    { 5026, "strexec-d" },                      /* Storix I/O daemon (data) */
    { 5027, "strexec-s" },                      /* Storix I/O daemon (stat) */
    { 5029, "infobright" },                     /* Infobright Database Server */
    { 5042, "asnaacceler8db" },
    { 5043, "swxadmin" },                       /* ShopWorX Administration */
    { 5044, "lxi-evntsvc" },                    /* LXI Event Service */
    { 5049, "ivocalize" },                      /* iVocalize Web Conference */
    { 5050, "mmcc" },                           /* multimedia conference control tool */
    { 5051, "ita-agent" },                      /* ITA Agent */
    { 5052, "ita-manager" },                    /* ITA Manager */
    { 5055, "unot" },                           /* UNOT */
    { 5056, "intecom-ps1" },                    /* Intecom Pointspan 1 */
    { 5057, "intecom-ps2" },                    /* Intecom Pointspan 2 */
    { 5059, "sds" },                            /* SIP Directory Services */
    { 5060, "sip" },                            /* SIP */
    { 5061, "sips" },                           /* SIP-TLS */
    { 5062, "na-localise" },                    /* Localisation access */
    { 5064, "ca-1" },                           /* Channel Access 1 */
    { 5065, "ca-2" },                           /* Channel Access 2 */
    { 5066, "stanag-5066" },                    /* STANAG-5066-SUBNET-INTF */
    { 5067, "authentx" },                       /* Authentx Service */
    { 5069, "i-net-2000-npr" },                 /* I/Net 2000-NPR */
    { 5070, "vtsas" },                          /* VersaTrans Server Agent Service */
    { 5071, "powerschool" },                    /* PowerSchool */
    { 5072, "ayiya" },                          /* Anything In Anything */
    { 5073, "tag-pm" },                         /* Advantage Group Port Mgr */
    { 5074, "alesquery" },                      /* ALES Query */
    { 5080, "onscreen" },                       /* OnScreen Data Collection Service */
    { 5081, "sdl-ets" },                        /* SDL - Ent Trans Server */
    { 5082, "qcp" },                            /* Qpur Communication Protocol */
    { 5083, "qfp" },                            /* Qpur File Protocol */
    { 5084, "llrp" },                           /* EPCglobal Low-Level Reader Protocol */
    { 5085, "encrypted-llrp" },                 /* EPCglobal Encrypted LLRP */
    { 5093, "sentinel-lm" },                    /* Sentinel LM */
    { 5094, "hart-ip" },                        /* HART-IP */
    { 5099, "sentlm-srv2srv" },                 /* SentLM Srv2Srv */
    { 5100, "socalia" },                        /* Socalia service mux */
    { 5102, "oms-nonsecure" },                  /* Oracle OMS non-secure */
    { 5111, "taep-as-svc" },                    /* TAEP AS service */
    { 5112, "pm-cmdsvr" },                      /* PeerMe Msg Cmd Service */
    { 5120, "barracuda-bbs" },                  /* Barracuda Backup Protocol */
    { 5133, "nbt-pc" },                         /* Policy Commander */
    { 5137, "ctsd" },                           /* MyCTS server port */
    { 5145, "rmonitor-secure" },                /* RMONITOR SECURE */
    { 5150, "atmp" },                           /* Ascend Tunnel Management Protocol */
    { 5151, "esri-sde" },                       /* ESRI SDE Instance */
    { 5152, "sde-discovery" },                  /* ESRI SDE Instance Discovery */
    { 5154, "bzflag" },                         /* BZFlag game server */
    { 5155, "asctrl-agent" },                   /* Oracle asControl Agent */
    { 5165, "ife-icorp" },                      /* ife_1corp */
    { 5166, "winpcs" },                         /* WinPCS Service Connection */
    { 5167, "scte104" },                        /* SCTE104 Connection */
    { 5168, "scte30" },                         /* SCTE30 Connection */
    { 5190, "aol" },                            /* America-Online */
    { 5191, "aol-1" },                          /* AmericaOnline1 */
    { 5192, "aol-2" },                          /* AmericaOnline2 */
    { 5193, "aol-3" },                          /* AmericaOnline3 */
    { 5200, "targus-getdata" },                 /* TARGUS GetData */
    { 5201, "targus-getdata1" },                /* TARGUS GetData 1 */
    { 5202, "targus-getdata2" },                /* TARGUS GetData 2 */
    { 5203, "targus-getdata3" },                /* TARGUS GetData 3 */
    { 5223, "hpvirtgrp" },                      /* HP Virtual Machine Group Management */
    { 5224, "hpvirtctrl" },                     /* HP Virtual Machine Console Operations */
    { 5225, "hp-server" },                      /* HP Server */
    { 5226, "hp-status" },                      /* HP Status */
    { 5227, "perfd" },                          /* HP System Performance Metric Service */
    { 5234, "eenet" },                          /* EEnet communications */
    { 5235, "galaxy-network" },                 /* Galaxy Network Service */
    { 5236, "padl2sim" },
    { 5237, "mnet-discovery" },                 /* m-net discovery */
    { 5248, "caacws" },                         /* CA Access Control Web Service */
    { 5249, "caaclang2" },                      /* CA AC Lang Service */
    { 5250, "soagateway" },                     /* soaGateway */
    { 5251, "caevms" },                         /* CA eTrust VM Service */
    { 5252, "movaz-ssc" },                      /* Movaz SSC */
    { 5264, "3com-njack-1" },                   /* 3Com Network Jack Port 1 */
    { 5265, "3com-njack-2" },                   /* 3Com Network Jack Port 2 */
    { 5270, "cartographerxmp" },                /* Cartographer XMP */
    { 5272, "pk" },                             /* PK */
    { 5282, "transmit-port" },                  /* Marimba Transmitter Port */
    { 5298, "presence" },                       /* XMPP Link-Local Messaging */
    { 5299, "nlg-data" },                       /* NLG Data Service */
    { 5300, "hacl-hb" },                        /* HA cluster heartbeat */
    { 5301, "hacl-gs" },                        /* HA cluster general services */
    { 5302, "hacl-cfg" },                       /* HA cluster configuration */
    { 5303, "hacl-probe" },                     /* HA cluster probing */
    { 5304, "hacl-local" },                     /* HA Cluster Commands */
    { 5305, "hacl-test" },                      /* HA Cluster Test */
    { 5306, "sun-mc-grp" },                     /* Sun MC Group */
    { 5307, "sco-aip" },                        /* SCO AIP */
    { 5308, "cfengine" },                       /* CFengine */
    { 5309, "jprinter" },                       /* J Printer */
    { 5310, "outlaws" },                        /* Outlaws */
    { 5312, "permabit-cs" },                    /* Permabit Client-Server */
    { 5313, "rrdp" },                           /* Real-time & Reliable Data */
    { 5314, "opalis-rbt-ipc" },
    { 5315, "hacl-poll" },                      /* HA Cluster UDP Polling */
    { 5343, "kfserver" },                       /* Sculptor Database Server */
    { 5344, "xkotodrcp" },                      /* xkoto DRCP */
    { 5349, "stuns" },                          /* Session Traversal Utilities for NAT (STUN) port */
    { 5352, "dns-llq" },                        /* DNS Long-Lived Queries */
    { 5353, "mdns" },                           /* Multicast DNS */
    { 5354, "mdnsresponder" },                  /* Multicast DNS Responder IPC */
    { 5355, "llmnr" },                          /* LLMNR */
    { 5356, "ms-smlbiz" },                      /* Microsoft Small Business */
    { 5357, "wsdapi" },                         /* Web Services for Devices */
    { 5358, "wsdapi-s" },                       /* WS for Devices Secured */
    { 5359, "ms-alerter" },                     /* Microsoft Alerter */
    { 5360, "ms-sideshow" },                    /* Protocol for Windows SideShow */
    { 5361, "ms-s-sideshow" },                  /* Secure Protocol for Windows SideShow */
    { 5362, "serverwsd2" },                     /* Microsoft Windows Server WSD2 Service */
    { 5363, "net-projection" },                 /* Windows Network Projection */
    { 5397, "stresstester" },                   /* StressTester(tm) Injector */
    { 5398, "elektron-admin" },                 /* Elektron Administration */
    { 5399, "securitychase" },                  /* SecurityChase */
    { 5400, "excerpt" },                        /* Excerpt Search */
    { 5401, "excerpts" },                       /* Excerpt Search Secure */
    { 5402, "mftp" },                           /* OmniCast MFTP */
    { 5403, "hpoms-ci-lstn" },                  /* HPOMS-CI-LSTN */
    { 5404, "hpoms-dps-lstn" },                 /* HPOMS-DPS-LSTN */
    { 5405, "netsupport" },                     /* NetSupport */
    { 5406, "systemics-sox" },                  /* Systemics Sox */
    { 5407, "foresyte-clear" },                 /* Foresyte-Clear */
    { 5408, "foresyte-sec" },                   /* Foresyte-Sec */
    { 5409, "salient-dtasrv" },                 /* Salient Data Server */
    { 5410, "salient-usrmgr" },                 /* Salient User Manager */
    { 5411, "actnet" },                         /* ActNet */
    { 5412, "continuus" },                      /* Continuus */
    { 5413, "wwiotalk" },                       /* WWIOTALK */
    { 5414, "statusd" },                        /* StatusD */
    { 5415, "ns-server" },                      /* NS Server */
    { 5416, "sns-gateway" },                    /* SNS Gateway */
    { 5417, "sns-agent" },                      /* SNS Agent */
    { 5418, "mcntp" },                          /* MCNTP */
    { 5419, "dj-ice" },                         /* DJ-ICE */
    { 5420, "cylink-c" },                       /* Cylink-C */
    { 5421, "netsupport2" },                    /* Net Support 2 */
    { 5422, "salient-mux" },                    /* Salient MUX */
    { 5423, "virtualuser" },                    /* VIRTUALUSER */
    { 5424, "beyond-remote" },                  /* Beyond Remote */
    { 5425, "br-channel" },                     /* Beyond Remote Command Channel */
    { 5426, "devbasic" },                       /* DEVBASIC */
    { 5427, "sco-peer-tta" },                   /* SCO-PEER-TTA */
    { 5428, "telaconsole" },                    /* TELACONSOLE */
    { 5429, "base" },                           /* Billing and Accounting System Exchange */
    { 5430, "radec-corp" },                     /* RADEC CORP */
    { 5431, "park-agent" },                     /* PARK AGENT */
    { 5432, "postgresql" },                     /* PostgreSQL Database */
    { 5433, "pyrrho" },                         /* Pyrrho DBMS */
    { 5434, "sgi-arrayd" },                     /* SGI Array Services Daemon */
    { 5435, "sceanics" },                       /* SCEANICS situation and action notification */
    { 5443, "spss" },                           /* Pearson HTTPS */
    { 5453, "surebox" },                        /* SureBox */
    { 5454, "apc-5454" },                       /* APC 5454 */
    { 5455, "apc-5455" },                       /* APC 5455 */
    { 5456, "apc-5456" },                       /* APC 5456 */
    { 5461, "silkmeter" },                      /* SILKMETER */
    { 5462, "ttl-publisher" },                  /* TTL Publisher */
    { 5463, "ttlpriceproxy" },                  /* TTL Price Proxy */
    { 5464, "quailnet" },                       /* Quail Networks Object Broker */
    { 5465, "netops-broker" },                  /* NETOPS-BROKER */
    { 5500, "fcp-addr-srvr1" },
    { 5501, "fcp-addr-srvr2" },
    { 5502, "fcp-srvr-inst1" },
    { 5503, "fcp-srvr-inst2" },
    { 5504, "fcp-cics-gw1" },
    { 5505, "checkoutdb" },                     /* Checkout Database */
    { 5506, "amc" },                            /* Amcom Mobile Connect */
    { 5540, "matter" },                         /* Matter Operational Discovery and Communi */
    { 5553, "sgi-eventmond" },                  /* SGI Eventmond Port */
    { 5554, "sgi-esphttp" },                    /* SGI ESP HTTP */
    { 5555, "personal-agent" },                 /* Personal Agent */
    { 5556, "freeciv" },                        /* Freeciv gameplay */
    { 5567, "dof-dps-mc-sec" },                 /* DOF Protocol Stack Multicast/Secure Transport */
    { 5568, "sdt" },                            /* Session Data Transport Multicast */
    { 5573, "sdmmp" },                          /* SAS Domain Management Messaging Protocol */
    { 5580, "tmosms0" },                        /* T-Mobile SMS Protocol Message 0 */
    { 5581, "tmosms1" },                        /* T-Mobile SMS Protocol Message 1 */
    { 5582, "fac-restore" },                    /* T-Mobile SMS Protocol Message 3 */
    { 5583, "tmo-icon-sync" },                  /* T-Mobile SMS Protocol Message 2 */
    { 5584, "bis-web" },                        /* BeInSync-Web */
    { 5585, "bis-sync" },                       /* BeInSync-sync */
    { 5597, "ininmessaging" },                  /* inin secure messaging */
    { 5598, "mctfeed" },                        /* MCT Market Data Feed */
    { 5599, "esinstall" },                      /* Enterprise Security Remote Install */
    { 5600, "esmmanager" },                     /* Enterprise Security Manager */
    { 5601, "esmagent" },                       /* Enterprise Security Agent */
    { 5602, "a1-msc" },                         /* A1-MSC */
    { 5603, "a1-bs" },                          /* A1-BS */
    { 5604, "a3-sdunode" },                     /* A3-SDUNode */
    { 5605, "a4-sdunode" },                     /* A4-SDUNode */
    { 5627, "ninaf" },                          /* Node Initiated Network Association Forma */
    { 5628, "htrust" },                         /* HTrust API */
    { 5629, "symantec-sfdb" },                  /* Symantec Storage Foundation for Database */
    { 5630, "precise-comm" },                   /* PreciseCommunication */
    { 5631, "pcanywheredata" },                 /* pcANYWHEREdata */
    { 5632, "pcanywherestat" },                 /* pcANYWHEREstat */
    { 5633, "beorl" },                          /* BE Operations Request Listener */
    { 5634, "xprtld" },                         /* SF Message Service */
    { 5671, "amqps" },                          /* amqp protocol over TLS/SSL */
    { 5672, "amqp" },                           /* AMQP */
    { 5673, "jms" },                            /* JACL Message Server */
    { 5674, "hyperscsi-port" },                 /* HyperSCSI Port */
    { 5675, "v5ua" },                           /* V5UA application port */
    { 5676, "raadmin" },                        /* RA Administration */
    { 5677, "questdb2-lnchr" },                 /* Quest Central DB2 Launchr */
    { 5678, "rrac" },                           /* Remote Replication Agent Connection */
    { 5679, "dccm" },                           /* Direct Cable Connect Manager */
    { 5680, "auriga-router" },                  /* Auriga Router Service */
    { 5681, "ncxcp" },                          /* Net-coneX Control Protocol */
    { 5683, "coap" },                           /* Constrained Application Protocol (CoAP) */
    { 5684, "coaps" },                          /* Constrained Application Protocol (CoAP) */
    { 5688, "ggz" },                            /* GGZ Gaming Zone */
    { 5689, "qmvideo" },                        /* QM video network management protocol */
    { 5713, "proshareaudio" },                  /* proshare conf audio */
    { 5714, "prosharevideo" },                  /* proshare conf video */
    { 5715, "prosharedata" },                   /* proshare conf data */
    { 5716, "prosharerequest" },                /* proshare conf request */
    { 5717, "prosharenotify" },                 /* proshare conf notify */
    { 5718, "dpm" },                            /* DPM Communication Server */
    { 5719, "dpm-agent" },                      /* DPM Agent Coordinator */
    { 5720, "ms-licensing" },                   /* MS-Licensing */
    { 5721, "dtpt" },                           /* Desktop Passthru Service */
    { 5722, "msdfsr" },                         /* Microsoft DFS Replication Service */
    { 5723, "omhs" },                           /* Operations Manager - Health Service */
    { 5724, "omsdk" },                          /* Operations Manager - SDK Service */
    { 5729, "openmail" },                       /* Openmail User Agent Layer */
    { 5730, "unieng" },                         /* Steltor's calendar access */
    { 5741, "ida-discover1" },                  /* IDA Discover Port 1 */
    { 5742, "ida-discover2" },                  /* IDA Discover Port 2 */
    { 5743, "watchdoc-pod" },                   /* Watchdoc NetPOD Protocol */
    { 5744, "watchdoc" },                       /* Watchdoc Server */
    { 5745, "fcopy-server" },
    { 5746, "fcopys-server" },
    { 5747, "tunatic" },                        /* Wildbits Tunatic */
    { 5748, "tunalyzer" },                      /* Wildbits Tunalyzer */
    { 5750, "rscd" },                           /* Bladelogic Agent Service */
    { 5755, "openmailg" },                      /* OpenMail Desk Gateway server */
    { 5757, "x500ms" },                         /* OpenMail X.500 Directory Server */
    { 5766, "openmailns" },                     /* OpenMail NewMail Server */
    { 5767, "s-openmail" },                     /* OpenMail Suer Agent Layer (Secure) */
    { 5768, "openmailpxy" },                    /* OpenMail CMTS Server */
    { 5769, "spramsca" },                       /* x509solutions Internal CA */
    { 5770, "spramsd" },                        /* x509solutions Secure Data */
    { 5771, "netagent" },                       /* NetAgent */
    { 5777, "starfield-io" },                   /* Control commands and responses */
    { 5781, "3par-evts" },                      /* 3PAR Event Reporting Service */
    { 5782, "3par-mgmt" },                      /* 3PAR Management Service */
    { 5783, "3par-mgmt-ssl" },                  /* 3PAR Management Service with SSL */
    { 5785, "3par-rcopy" },                     /* 3PAR Inform Remote Copy */
    { 5793, "xtreamx" },                        /* XtreamX Supervised Peer message */
    { 5813, "icmpd" },                          /* ICMPD */
    { 5814, "spt-automation" },                 /* Support Automation */
    { 5859, "wherehoo" },                       /* WHEREHOO */
    { 5863, "ppsuitemsg" },                     /* PlanetPress Suite Messeng */
    { 5900, "rfb" },                            /* Remote Framebuffer */
    { 5903, "ff-ice" },                         /* Flight & Flow Info for Collaborative Env */
    { 5904, "ag-swim" },                        /* Air-Ground SWIM */
    { 5905, "asmgcs" },                         /* Adv Surface Mvmnt and Guidance Cont Sys */
    { 5906, "rpas-c2" },                        /* Remotely Piloted Vehicle C&C */
    { 5907, "dsd" },                            /* Distress and Safety Data App */
    { 5908, "ipsma" },                          /* IPS Management Application */
    { 5909, "agma" },                           /* Air-ground media advisory */
    { 5910, "ats-atn" },                        /* Air Traffic Services applications using ATN */
    { 5911, "ats-acars" },                      /* Air Traffic Services applications using ACARS */
    { 5912, "ais-met" },                        /* Aeronautical Information Service/Meteorological applications using ACARS */
    { 5913, "aoc-acars" },                      /* Airline operational communications applications using ACARS */
    { 5963, "indy" },                           /* Indy Application Server */
    { 5968, "mppolicy-v5" },
    { 5969, "mppolicy-mgr" },
    { 5984, "couchdb" },                        /* CouchDB */
    { 5985, "wsman" },                          /* WBEM WS-Management HTTP */
    { 5986, "wsmans" },                         /* WBEM WS-Management HTTP over TLS/SSL */
    { 5987, "wbem-rmi" },                       /* WBEM RMI */
    { 5988, "wbem-http" },                      /* WBEM CIM-XML (HTTP) */
    { 5989, "wbem-https" },                     /* WBEM CIM-XML (HTTPS) */
    { 5990, "wbem-exp-https" },                 /* WBEM Export HTTPS */
    { 5991, "nuxsl" },                          /* NUXSL */
    { 5992, "consul-insight" },                 /* Consul InSight Security */
    { 5999, "cvsup" },                          /* CVSup */
    { 6000, "x11" },                            /* X Window System */
    { 6063, "x11" },                            /* X Window System */
    { 6064, "ndl-ahp-svc" },                    /* NDL-AHP-SVC */
    { 6065, "winpharaoh" },                     /* WinPharaoh */
    { 6066, "ewctsp" },                         /* EWCTSP */
    { 6069, "trip" },                           /* TRIP */
    { 6070, "messageasap" },                    /* Messageasap */
    { 6071, "ssdtp" },                          /* SSDTP */
    { 6072, "diagnose-proc" },                  /* DIAGNOSE-PROC */
    { 6073, "directplay8" },                    /* DirectPlay8 */
    { 6074, "max" },                            /* Microsoft Max */
    { 6085, "konspire2b" },                     /* konspire2b p2p network */
    { 6086, "pdtp" },                           /* PDTP P2P */
    { 6087, "ldss" },                           /* Local Download Sharing Service */
    { 6100, "synchronet-db" },                  /* SynchroNet-db */
    { 6101, "synchronet-rtc" },                 /* SynchroNet-rtc */
    { 6102, "synchronet-upd" },                 /* SynchroNet-upd */
    { 6103, "rets" },                           /* RETS */
    { 6104, "dbdb" },                           /* DBDB */
    { 6105, "primaserver" },                    /* Prima Server */
    { 6106, "mpsserver" },                      /* MPS Server */
    { 6107, "etc-control" },                    /* ETC Control */
    { 6108, "sercomm-scadmin" },                /* Sercomm-SCAdmin */
    { 6109, "globecast-id" },                   /* GLOBECAST-ID */
    { 6110, "softcm" },                         /* HP SoftBench CM */
    { 6111, "spc" },                            /* HP SoftBench Sub-Process Control */
    { 6112, "dtspcd" },                         /* Desk-Top Sub-Process Control Daemon */
    { 6122, "bex-webadmin" },                   /* Backup Express Web Server */
    { 6123, "backup-express" },                 /* Backup Express */
    { 6124, "pnbs" },                           /* Phlexible Network Backup Service */
    { 6133, "nbt-wol" },                        /* New Boundary Tech WOL */
    { 6140, "pulsonixnls" },                    /* Pulsonix Network License Service */
    { 6141, "meta-corp" },                      /* Meta Corporation License Manager */
    { 6142, "aspentec-lm" },                    /* Aspen Technology License Manager */
    { 6143, "watershed-lm" },                   /* Watershed License Manager */
    { 6144, "statsci1-lm" },                    /* StatSci License Manager - 1 */
    { 6145, "statsci2-lm" },                    /* StatSci License Manager - 2 */
    { 6146, "lonewolf-lm" },                    /* Lone Wolf Systems License Manager */
    { 6147, "montage-lm" },                     /* Montage License Manager */
    { 6148, "ricardo-lm" },                     /* Ricardo North America License Manager */
    { 6149, "tal-pod" },
    { 6161, "patrol-ism" },                     /* PATROL Internet Srv Mgr */
    { 6162, "patrol-coll" },                    /* PATROL Collector */
    { 6163, "pscribe" },                        /* Precision Scribe Cnx Port */
    { 6200, "lm-x" },                           /* LM-X License Manager by X-Formation */
    { 6209, "qmtps" },                          /* QMTP over TLS */
    { 6222, "radmind" },                        /* Radmind Access Protocol */
    { 6251, "tl1-raw-ssl" },                    /* TL1 Raw Over SSL/TLS */
    { 6252, "tl1-ssh" },                        /* TL1 over SSH */
    { 6253, "crip" },                           /* CRIP */
    { 6268, "grid" },                           /* Grid Authentication */
    { 6269, "grid-alt" },                       /* Grid Authentication Alt */
    { 6300, "bmc-grx" },                        /* BMC GRX */
    { 6301, "bmc-ctd-ldap" },                   /* BMC CONTROL-D LDAP SERVER */
    { 6306, "ufmp" },                           /* Unified Fabric Management Protocol */
    { 6316, "abb-escp" },                       /* Ethernet Sensor Communications Protocol */
    { 6320, "repsvc" },                         /* Double-Take Replication Service */
    { 6321, "emp-server1" },                    /* Empress Software Connectivity Server 1 */
    { 6322, "emp-server2" },                    /* Empress Software Connectivity Server 2 */
    { 6343, "sflow" },                          /* sFlow traffic monitoring */
    { 6346, "gnutella-svc" },
    { 6347, "gnutella-rtr" },
    { 6350, "adap" },                           /* App Discovery and Access Protocol */
    { 6355, "pmcs" },                           /* PMCS applications */
    { 6360, "metaedit-mu" },                    /* MetaEdit+ Multi-User */
    { 6370, "metaedit-se" },                    /* MetaEdit+ Server Administration */
    { 6382, "metatude-mds" },                   /* Metatude Dialogue Server */
    { 6389, "clariion-evr01" },
    { 6390, "metaedit-ws" },                    /* MetaEdit+ WebService API */
    { 6417, "faxcomservice" },                  /* Faxcom Message Service */
    { 6420, "nim-vdrshell" },                   /* NIM_VDRShell */
    { 6421, "nim-wan" },                        /* NIM_WAN */
    { 6443, "sun-sr-https" },                   /* Service Registry Default HTTPS Domain */
    { 6444, "sge-qmaster" },                    /* Grid Engine Qmaster Service */
    { 6445, "sge-execd" },                      /* Grid Engine Execution Service */
    { 6446, "mysql-proxy" },                    /* MySQL Proxy */
    { 6455, "skip-cert-recv" },                 /* SKIP Certificate Receive */
    { 6456, "skip-cert-send" },                 /* SKIP Certificate Send */
    { 6464, "ieee11073-20701" },                /* Port assignment for medical device communication in accordance to IEEE 11073-20701 */
    { 6471, "lvision-lm" },                     /* LVision License Manager */
    { 6480, "sun-sr-http" },                    /* Service Registry Default HTTP Domain */
    { 6481, "servicetags" },                    /* Service Tags */
    { 6482, "ldoms-mgmt" },                     /* Logical Domains Management Interface */
    { 6483, "SunVTS-RMI" },
    { 6484, "sun-sr-jms" },                     /* Service Registry Default JMS Domain */
    { 6485, "sun-sr-iiop" },                    /* Service Registry Default IIOP Domain */
    { 6486, "sun-sr-iiops" },                   /* Service Registry Default IIOPS Domain */
    { 6487, "sun-sr-iiop-aut" },                /* Service Registry Default IIOPAuth Domain */
    { 6488, "sun-sr-jmx" },                     /* Service Registry Default JMX Domain */
    { 6489, "sun-sr-admin" },                   /* Service Registry Default Admin Domain */
    { 6500, "boks" },                           /* BoKS Master */
    { 6501, "boks-servc" },                     /* BoKS Servc */
    { 6502, "boks-servm" },                     /* BoKS Servm */
    { 6503, "boks-clntd" },                     /* BoKS Clntd */
    { 6505, "badm-priv" },                      /* BoKS Admin Private Port */
    { 6506, "badm-pub" },                       /* BoKS Admin Public Port */
    { 6507, "bdir-priv" },                      /* BoKS Dir Server, Private Port */
    { 6508, "bdir-pub" },                       /* BoKS Dir Server, Public Port */
    { 6509, "mgcs-mfp-port" },                  /* MGCS-MFP Port */
    { 6510, "mcer-port" },                      /* MCER Port */
    { 6514, "syslog-tls" },                     /* Syslog over TLS */
    { 6515, "elipse-rec" },                     /* Elipse RPC Protocol */
    { 6543, "lds-distrib" },                    /* lds_distrib */
    { 6544, "lds-dump" },                       /* LDS Dump Service */
    { 6547, "apc-6547" },                       /* APC 6547 */
    { 6548, "apc-6548" },                       /* APC 6548 */
    { 6549, "apc-6549" },                       /* APC 6549 */
    { 6550, "fg-sysupdate" },
    { 6551, "sum" },                            /* Software Update Manager */
    { 6558, "xdsxdm" },
    { 6566, "sane-port" },                      /* SANE Control Port */
    { 6579, "affiliate" },                      /* Affiliate */
    { 6580, "parsec-master" },                  /* Parsec Masterserver */
    { 6581, "parsec-peer" },                    /* Parsec Peer-to-Peer */
    { 6582, "parsec-game" },                    /* Parsec Gameserver */
    { 6583, "joaJewelSuite" },                  /* JOA Jewel Suite */
    { 6619, "odette-ftps" },                    /* ODETTE-FTP over TLS/SSL */
    { 6620, "kftp-data" },                      /* Kerberos V5 FTP Data */
    { 6621, "kftp" },                           /* Kerberos V5 FTP Control */
    { 6622, "mcftp" },                          /* Multicast FTP */
    { 6623, "ktelnet" },                        /* Kerberos V5 Telnet */
    { 6626, "wago-service" },                   /* WAGO Service and Update */
    { 6627, "nexgen" },                         /* Allied Electronics NeXGen */
    { 6628, "afesc-mc" },                       /* AFE Stock Channel M/C */
    { 6629, "nexgen-aux" },                     /* Secondary, (non ANDI) multi-protocol multi-function interface to the Allied ANDI-based family of forecourt controllers */
    { 6653, "openflow" },                       /* OpenFlow */
    { 6670, "vocaltec-gold" },                  /* Vocaltec Global Online Directory */
    { 6671, "p4p-portal" },                     /* P4P Portal Service */
    { 6672, "vision-server" },                  /* vision_server */
    { 6673, "vision-elmd" },                    /* vision_elmd */
    { 6679, "osaut" },                          /* Osorno Automation */
    { 6689, "tsa" },                            /* Tofino Security Appliance */
    { 6701, "kti-icad-srvr" },                  /* KTI/ICAD Nameserver */
    { 6702, "e-design-net" },                   /* e-Design network */
    { 6703, "e-design-web" },                   /* e-Design web */
    { 6714, "ibprotocol" },                     /* Internet Backplane Protocol */
    { 6715, "fibotrader-com" },                 /* Fibotrader Communications */
    { 6767, "bmc-perf-agent" },                 /* BMC PERFORM AGENT */
    { 6768, "bmc-perf-mgrd" },                  /* BMC PERFORM MGRD */
    { 6769, "adi-gxp-srvprt" },                 /* ADInstruments GxP Server */
    { 6770, "plysrv-http" },                    /* PolyServe http */
    { 6771, "plysrv-https" },                   /* PolyServe https */
    { 6785, "dgpf-exchg" },                     /* DGPF Individual Exchange */
    { 6786, "smc-jmx" },                        /* Sun Java Web Console JMX */
    { 6787, "smc-admin" },                      /* Sun Web Console Admin */
    { 6788, "smc-http" },                       /* SMC-HTTP */
    { 6790, "hnmp" },                           /* HNMP */
    { 6791, "hnm" },                            /* Halcyon Network Manager */
    { 6801, "acnet" },                          /* ACNET Control System Protocol */
    { 6831, "ambit-lm" },
    { 6841, "netmo-default" },                  /* Netmo Default */
    { 6842, "netmo-http" },                     /* Netmo HTTP */
    { 6850, "iccrushmore" },                    /* ICCRUSHMORE */
    { 6888, "muse" },                           /* MUSE */
    { 6924, "split-ping" },                     /* Ping with RX/TX latency/loss split */
    { 6935, "ethoscan" },                       /* EthoScan Service */
    { 6936, "xsmsvc" },                         /* XenSource Management Service */
    { 6946, "bioserver" },                      /* Biometrics Server */
    { 6951, "otlp" },                           /* OTLP */
    { 6961, "jmact3" },                         /* JMACT3 */
    { 6962, "jmevt2" },
    { 6963, "swismgr1" },
    { 6964, "swismgr2" },
    { 6965, "swistrap" },
    { 6966, "swispol" },
    { 6969, "acmsoda" },
    { 6997, "MobilitySrv" },                    /* Mobility XE Protocol */
    { 6998, "iatp-highpri" },                   /* IATP-highPri */
    { 6999, "iatp-normalpri" },                 /* IATP-normalPri */
    { 7000, "afs3-fileserver" },                /* file server itself */
    { 7001, "afs3-callback" },                  /* callbacks to cache managers */
    { 7002, "afs3-prserver" },                  /* users & groups database */
    { 7003, "afs3-vlserver" },                  /* volume location database */
    { 7004, "afs3-kaserver" },                  /* AFS/Kerberos authentication service */
    { 7005, "afs3-volser" },                    /* volume managment server */
    { 7006, "afs3-errors" },                    /* error interpretation service */
    { 7007, "afs3-bos" },                       /* basic overseer process */
    { 7008, "afs3-update" },                    /* server-to-server updater */
    { 7009, "afs3-rmtsys" },                    /* remote cache manager service */
    { 7010, "ups-onlinet" },                    /* onlinet uninterruptable power supplies */
    { 7011, "talon-disc" },                     /* Talon Discovery Port */
    { 7012, "talon-engine" },                   /* Talon Engine */
    { 7013, "microtalon-dis" },                 /* Microtalon Discovery */
    { 7014, "microtalon-com" },                 /* Microtalon Communications */
    { 7015, "talon-webserver" },                /* Talon Webserver */
    { 7016, "spg" },                            /* SPG Controls Carrier */
    { 7017, "grasp" },                          /* GeneRic Autonomic Signaling Protocol */
    { 7020, "dpserve" },                        /* DP Serve */
    { 7021, "dpserveadmin" },                   /* DP Serve Admin */
    { 7022, "ctdp" },                           /* CT Discovery Protocol */
    { 7023, "ct2nmcs" },                        /* Comtech T2 NMCS */
    { 7024, "vmsvc" },                          /* Vormetric service */
    { 7025, "vmsvc-2" },                        /* Vormetric Service II */
    { 7030, "op-probe" },                       /* ObjectPlanet probe */
    { 7070, "arcp" },                           /* ARCP */
    { 7071, "iwg1" },                           /* IWGADTS Aircraft Housekeeping Message */
    { 7080, "empowerid" },                      /* EmpowerID Communication */
    { 7099, "lazy-ptop" },
    { 7100, "font-service" },                   /* X Font Service */
    { 7101, "elcn" },                           /* Embedded Light Control Network */
    { 7121, "virprot-lm" },                     /* Virtual Prototypes License Manager */
    { 7128, "scenidm" },                        /* intelligent data manager */
    { 7129, "scenccs" },                        /* Catalog Content Search */
    { 7161, "cabsm-comm" },                     /* CA BSM Comm */
    { 7162, "caistoragemgr" },                  /* CA Storage Manager */
    { 7163, "cacsambroker" },                   /* CA Connection Broker */
    { 7164, "fsr" },                            /* File System Repository Agent */
    { 7165, "doc-server" },                     /* Document WCF Server */
    { 7166, "aruba-server" },                   /* Aruba eDiscovery Server */
    { 7169, "ccag-pib" },                       /* Consequor Consulting Process Integration Bridge */
    { 7170, "nsrp" },                           /* Adaptive Name/Service Resolution */
    { 7171, "drm-production" },                 /* Discovery and Retention Mgt Production */
    { 7174, "clutild" },                        /* Clutild */
    { 7200, "fodms" },                          /* FODMS FLIP */
    { 7201, "dlip" },                           /* DLIP */
    { 7227, "ramp" },                           /* Registry A & M Protocol */
    { 7262, "cnap" },                           /* Calypso Network Access Protocol */
    { 7272, "watchme-7272" },                   /* WatchMe Monitoring 7272 */
    { 7273, "oma-rlp" },                        /* OMA Roaming Location */
    { 7274, "oma-rlp-s" },                      /* OMA Roaming Location SEC */
    { 7275, "oma-ulp" },                        /* OMA UserPlane Location */
    { 7276, "oma-ilp" },                        /* OMA Internal Location Protocol */
    { 7277, "oma-ilp-s" },                      /* OMA Internal Location Secure Protocol */
    { 7278, "oma-dcdocbs" },                    /* OMA Dynamic Content Delivery over CBS */
    { 7279, "ctxlic" },                         /* Citrix Licensing */
    { 7280, "itactionserver1" },                /* ITACTIONSERVER 1 */
    { 7281, "itactionserver2" },                /* ITACTIONSERVER 2 */
    { 7365, "lcm-server" },                     /* LifeKeeper Communications */
    { 7391, "mindfilesys" },                    /* mind-file system server */
    { 7392, "mrssrendezvous" },                 /* mrss-rendezvous server */
    { 7393, "nfoldman" },                       /* nFoldMan Remote Publish */
    { 7394, "fse" },                            /* File system export of backup images */
    { 7395, "winqedit" },
    { 7397, "hexarc" },                         /* Hexarc Command Language */
    { 7400, "rtps-discovery" },                 /* RTPS Discovery */
    { 7401, "rtps-dd-ut" },                     /* RTPS Data-Distribution User-Traffic */
    { 7402, "rtps-dd-mt" },                     /* RTPS Data-Distribution Meta-Traffic */
    { 7410, "ionixnetmon" },                    /* Ionix Network Monitor */
    { 7411, "daqstream" },                      /* Streaming of measurement data */
    { 7421, "mtportmon" },                      /* Matisse Port Monitor */
    { 7426, "pmdmgr" },                         /* OpenView DM Postmaster Manager */
    { 7427, "oveadmgr" },                       /* OpenView DM Event Agent Manager */
    { 7428, "ovladmgr" },                       /* OpenView DM Log Agent Manager */
    { 7429, "opi-sock" },                       /* OpenView DM rqt communication */
    { 7430, "xmpv7" },                          /* OpenView DM xmpv7 api pipe */
    { 7431, "pmd" },                            /* OpenView DM ovc/xmpv3 api pipe */
    { 7437, "faximum" },                        /* Faximum */
    { 7443, "oracleas-https" },                 /* Oracle Application Server HTTPS */
    { 7473, "rise" },                           /* Rise: The Vieneo Province */
    { 7491, "telops-lmd" },
    { 7500, "silhouette" },                     /* Silhouette User */
    { 7501, "ovbus" },                          /* HP OpenView Bus Daemon */
    { 7510, "ovhpas" },                         /* HP OpenView Application Server */
    { 7511, "pafec-lm" },
    { 7542, "saratoga" },                       /* Saratoga Transfer Protocol */
    { 7543, "atul" },                           /* atul server */
    { 7544, "nta-ds" },                         /* FlowAnalyzer DisplayServer */
    { 7545, "nta-us" },                         /* FlowAnalyzer UtilityServer */
    { 7546, "cfs" },                            /* Cisco Fabric service */
    { 7547, "cwmp" },                           /* Broadband Forum CWMP */
    { 7548, "tidp" },                           /* Threat Information Distribution Protocol */
    { 7549, "nls-tl" },                         /* Network Layer Signaling Transport Layer */
    { 7560, "sncp" },                           /* Sniffer Command Protocol */
    { 7566, "vsi-omega" },                      /* VSI Omega */
    { 7570, "aries-kfinder" },                  /* Aries Kfinder */
    { 7588, "sun-lm" },                         /* Sun License Manager */
    { 7606, "mipi-debug" },                     /* MIPI Alliance Debug */
    { 7624, "indi" },                           /* Instrument Neutral Distributed Interface */
    { 7627, "soap-http" },                      /* SOAP Service Port */
    { 7628, "zen-pawn" },                       /* Primary Agent Work Notification */
    { 7629, "xdas" },                           /* OpenXDAS Wire Protocol */
    { 7633, "pmdfmgt" },                        /* PMDF Management */
    { 7648, "cuseeme" },                        /* bonjour-cuseeme */
    { 7663, "rome" },                           /* Proprietary immutable distributed data storage */
    { 7674, "imqtunnels" },                     /* iMQ SSL tunnel */
    { 7675, "imqtunnel" },                      /* iMQ Tunnel */
    { 7676, "imqbrokerd" },                     /* iMQ Broker Rendezvous */
    { 7677, "sun-user-https" },                 /* Sun App Server - HTTPS */
    { 7680, "ms-do" },                          /* Microsoft Delivery Optimization Peer-to-Peer */
    { 7689, "collaber" },                       /* Collaber Network Service */
    { 7697, "klio" },                           /* KLIO communications */
    { 7707, "sync-em7" },                       /* EM7 Dynamic Updates */
    { 7708, "scinet" },                         /* scientia.net */
    { 7720, "medimageportal" },                 /* MedImage Portal */
    { 7724, "nsdeepfreezectl" },                /* Novell Snap-in Deep Freeze Control */
    { 7725, "nitrogen" },                       /* Nitrogen Service */
    { 7726, "freezexservice" },                 /* FreezeX Console Service */
    { 7727, "trident-data" },                   /* Trident Systems Data */
    { 7728, "osvr" },                           /* Open-Source Virtual Reality */
    { 7734, "smip" },                           /* Smith Protocol over IP */
    { 7738, "aiagent" },                        /* HP Enterprise Discovery Agent */
    { 7741, "scriptview" },                     /* ScriptView Network */
    { 7743, "sstp-1" },                         /* Sakura Script Transfer Protocol */
    { 7744, "raqmon-pdu" },                     /* RAQMON PDU */
    { 7747, "prgp" },                           /* Put/Run/Get Protocol */
    { 7777, "cbt" },
    { 7778, "interwise" },                      /* Interwise */
    { 7779, "vstat" },                          /* VSTAT */
    { 7781, "accu-lmgr" },
    { 7786, "minivend" },                       /* MINIVEND */
    { 7787, "popup-reminders" },                /* Popup Reminders Receive */
    { 7789, "office-tools" },                   /* Office Tools Pro Receive */
    { 7794, "q3ade" },                          /* Q3ADE Cluster Service */
    { 7797, "pnet-conn" },                      /* Propel Connector port */
    { 7798, "pnet-enc" },                       /* Propel Encoder port */
    { 7799, "altbsdp" },                        /* Alternate BSDP Service */
    { 7800, "asr" },                            /* Apple Software Restore */
    { 7801, "ssp-client" },                     /* Secure Server Protocol - client */
    { 7810, "rbt-wanopt" },                     /* Riverbed WAN Optimization Protocol */
    { 7845, "apc-7845" },                       /* APC 7845 */
    { 7846, "apc-7846" },                       /* APC 7846 */
    { 7880, "pss" },                            /* Pearson */
    { 7887, "ubroker" },                        /* Universal Broker */
    { 7900, "mevent" },                         /* Multicast Event */
    { 7901, "tnos-sp" },                        /* TNOS Service Protocol */
    { 7902, "tnos-dp" },                        /* TNOS shell Protocol */
    { 7903, "tnos-dps" },                       /* TNOS Secure DiaguardProtocol */
    { 7913, "qo-secure" },                      /* QuickObjects secure port */
    { 7932, "t2-drm" },                         /* Tier 2 Data Resource Manager */
    { 7933, "t2-brm" },                         /* Tier 2 Business Rules Manager */
    { 7962, "generalsync" },                    /* Encrypted, extendable, general-purpose synchronization protocol */
    { 7967, "supercell" },                      /* Supercell */
    { 7979, "micromuse-ncps" },                 /* Micromuse-ncps */
    { 7980, "quest-vista" },                    /* Quest Vista */
    { 7999, "irdmi2" },                         /* iRDMI2 */
    { 8000, "irdmi" },                          /* iRDMI */
    { 8001, "vcom-tunnel" },                    /* VCOM Tunnel */
    { 8002, "teradataordbms" },                 /* Teradata ORDBMS */
    { 8003, "mcreport" },                       /* Mulberry Connect Reporting Service */
    { 8005, "mxi" },                            /* MXI Generation II for z/OS */
    { 8007, "warppipe" },                       /* I/O oriented cluster computing software */
    { 8008, "http-alt" },                       /* HTTP Alternate */
    { 8019, "qbdb" },                           /* QB DB Dynamic Port */
    { 8020, "intu-ec-svcdisc" },                /* Intuit Entitlement Service and Discovery */
    { 8021, "intu-ec-client" },                 /* Intuit Entitlement Client */
    { 8022, "oa-system" },
    { 8023, "arca-api" },                       /* ARCATrust vault API */
    { 8025, "ca-audit-da" },                    /* CA Audit Distribution Agent */
    { 8026, "ca-audit-ds" },                    /* CA Audit Distribution Server */
    { 8027, "papachi-p2p-srv" },                /* peer tracker and data relay service */
    { 8032, "pro-ed" },                         /* ProEd */
    { 8033, "mindprint" },                      /* MindPrint */
    { 8034, "vantronix-mgmt" },                 /* .vantronix Management */
    { 8040, "ampify" },                         /* Ampify Messaging Protocol */
    { 8041, "enguity-xccetp" },                 /* Xcorpeon ASIC Carrier Ethernet Transport */
    { 8052, "senomix01" },                      /* Senomix Timesheets Server */
    { 8053, "senomix02" },                      /* Senomix Timesheets Client [1 year assignment] */
    { 8054, "senomix03" },                      /* Senomix Timesheets Server [1 year assignment] */
    { 8055, "senomix04" },                      /* Senomix Timesheets Server [1 year assignment] */
    { 8056, "senomix05" },                      /* Senomix Timesheets Server [1 year assignment] */
    { 8057, "senomix06" },                      /* Senomix Timesheets Client [1 year assignment] */
    { 8058, "senomix07" },                      /* Senomix Timesheets Client [1 year assignment] */
    { 8059, "senomix08" },                      /* Senomix Timesheets Client [1 year assignment] */
    { 8074, "gadugadu" },                       /* Gadu-Gadu */
    { 8080, "http-alt" },                       /* HTTP Alternate (see port 80) */
    { 8081, "sunproxyadmin" },                  /* Sun Proxy Admin Service */
    { 8082, "us-cli" },                         /* Utilistor (Client) */
    { 8083, "us-srv" },                         /* Utilistor (Server) */
    { 8086, "d-s-n" },                          /* Distributed SCADA Networking Rendezvous Port */
    { 8087, "simplifymedia" },                  /* Simplify Media SPP Protocol */
    { 8088, "radan-http" },                     /* Radan HTTP */
    { 8097, "sac" },                            /* SAC Port Id */
    { 8100, "xprint-server" },                  /* Xprint Server */
    { 8115, "mtl8000-matrix" },                 /* MTL8000 Matrix */
    { 8116, "cp-cluster" },                     /* Check Point Clustering */
    { 8118, "privoxy" },                        /* Privoxy HTTP proxy */
    { 8121, "apollo-data" },                    /* Apollo Data Port */
    { 8122, "apollo-admin" },                   /* Apollo Admin Port */
    { 8128, "paycash-online" },                 /* PayCash Online Protocol */
    { 8129, "paycash-wbp" },                    /* PayCash Wallet-Browser */
    { 8130, "indigo-vrmi" },                    /* INDIGO-VRMI */
    { 8131, "indigo-vbcp" },                    /* INDIGO-VBCP */
    { 8132, "dbabble" },
    { 8148, "isdd" },                           /* i-SDD file transfer */
    { 8160, "patrol" },                         /* Patrol */
    { 8161, "patrol-snmp" },                    /* Patrol SNMP */
    { 8182, "vmware-fdm" },                     /* VMware Fault Domain Manager */
    { 8184, "itach" },                          /* Remote iTach Connection */
    { 8192, "spytechphone" },                   /* SpyTech Phone Service */
    { 8194, "blp1" },                           /* Bloomberg data API */
    { 8195, "blp2" },                           /* Bloomberg feed */
    { 8199, "vvr-data" },                       /* VVR DATA */
    { 8200, "trivnet1" },                       /* TRIVNET */
    { 8201, "trivnet2" },                       /* TRIVNET */
    { 8204, "lm-perfworks" },                   /* LM Perfworks */
    { 8205, "lm-instmgr" },                     /* LM Instmgr */
    { 8206, "lm-dta" },                         /* LM Dta */
    { 8207, "lm-sserver" },                     /* LM SServer */
    { 8208, "lm-webwatcher" },                  /* LM Webwatcher */
    { 8230, "rexecj" },                         /* RexecJ Server */
    { 8243, "synapse-nhttps" },                 /* Synapse Non Blocking HTTPS */
    { 8276, "ms-mcc" },                         /* Microsoft Connected Cache */
    { 8280, "synapse-nhttp" },                  /* Synapse Non Blocking HTTP */
    { 8292, "blp3" },                           /* Bloomberg professional */
    { 8294, "blp4" },                           /* Bloomberg intelligent client */
    { 8300, "tmi" },                            /* Transport Management Interface */
    { 8301, "amberon" },                        /* Amberon PPC/PPS */
    { 8320, "tnp-discover" },                   /* Thin(ium) Network Protocol */
    { 8321, "tnp" },                            /* Thin(ium) Network Protocol */
    { 8322, "garmin-marine" },                  /* Garmin Marine */
    { 8351, "server-find" },                    /* Server Find */
    { 8376, "cruise-enum" },                    /* Cruise ENUM */
    { 8377, "cruise-swroute" },                 /* Cruise SWROUTE */
    { 8378, "cruise-config" },                  /* Cruise CONFIG */
    { 8379, "cruise-diags" },                   /* Cruise DIAGS */
    { 8380, "cruise-update" },                  /* Cruise UPDATE */
    { 8383, "m2mservices" },                    /* M2m Services */
    { 8400, "cvd" },
    { 8401, "sabarsd" },
    { 8402, "abarsd" },
    { 8403, "admind" },
    { 8416, "espeech" },                        /* eSpeech Session Protocol */
    { 8417, "espeech-rtp" },                    /* eSpeech RTP Protocol */
    { 8442, "cybro-a-bus" },                    /* CyBro A-bus Protocol */
    { 8443, "pcsync-https" },                   /* PCsync HTTPS */
    { 8444, "pcsync-http" },                    /* PCsync HTTP */
    { 8450, "npmp" },
    { 8472, "otv" },                            /* Overlay Transport Virtualization (OTV) */
    { 8473, "vp2p" },                           /* Virtual Point to Point */
    { 8474, "noteshare" },                      /* AquaMinds NoteShare */
    { 8500, "fmtp" },                           /* Flight Message Transfer Protocol */
    { 8554, "rtsp-alt" },                       /* RTSP Alternate (see port 554) */
    { 8555, "d-fence" },                        /* SYMAX D-FENCE */
    { 8567, "dof-tunnel" },                     /* DOF Tunneling Protocol */
    { 8600, "asterix" },                        /* Surveillance Data */
    { 8610, "canon-mfnp" },                     /* Canon MFNP Service */
    { 8611, "canon-bjnp1" },                    /* Canon BJNP Port 1 */
    { 8612, "canon-bjnp2" },                    /* Canon BJNP Port 2 */
    { 8613, "canon-bjnp3" },                    /* Canon BJNP Port 3 */
    { 8614, "canon-bjnp4" },                    /* Canon BJNP Port 4 */
    { 8686, "sun-as-jmxrmi" },                  /* Sun App Server - JMX/RMI */
    { 8733, "ibus" },                           /* iBus */
    { 8763, "mc-appserver" },                   /* MC-APPSERVER */
    { 8764, "openqueue" },                      /* OPENQUEUE */
    { 8765, "ultraseek-http" },                 /* Ultraseek HTTP */
    { 8766, "amcs" },                           /* Agilent Connectivity Service */
    { 8770, "dpap" },                           /* Digital Photo Access Protocol (iPhoto) */
    { 8786, "msgclnt" },                        /* Message Client */
    { 8787, "msgsrvr" },                        /* Message Server */
    { 8793, "acd-pm" },                         /* Accedian Performance Measurement */
    { 8800, "sunwebadmin" },                    /* Sun Web Server Admin Service */
    { 8804, "truecm" },
    { 8873, "dxspider" },                       /* dxspider linking protocol */
    { 8880, "cddbp-alt" },                      /* CDDBP */
    { 8883, "secure-mqtt" },                    /* Secure MQTT */
    { 8899, "ospf-lite" },
    { 8900, "jmb-cds1" },                       /* JMB-CDS 1 */
    { 8901, "jmb-cds2" },                       /* JMB-CDS 2 */
    { 8910, "manyone-http" },
    { 8911, "manyone-xml" },
    { 8912, "wcbackup" },                       /* Windows Client Backup */
    { 8913, "dragonfly" },                      /* Dragonfly System Service */
    { 8954, "cumulus-admin" },                  /* Cumulus Admin Port */
    { 8980, "nod-provider" },                   /* Network of Devices Provider */
    { 8989, "sunwebadmins" },                   /* Sun Web Server SSL Admin Service */
    { 8990, "http-wmap" },                      /* webmail HTTP service */
    { 8991, "https-wmap" },                     /* webmail HTTPS service */
    { 8999, "bctp" },                           /* Brodos Crypto Trade Protocol */
    { 9000, "cslistener" },                     /* CSlistener */
    { 9001, "etlservicemgr" },                  /* ETL Service Manager */
    { 9002, "dynamid" },                        /* DynamID authentication */
    { 9009, "pichat" },                         /* Pichat Server */
    { 9020, "tambora" },                        /* TAMBORA */
    { 9021, "panagolin-ident" },                /* Pangolin Identification */
    { 9022, "paragent" },                       /* PrivateArk Remote Agent */
    { 9023, "swa-1" },                          /* Secure Web Access - 1 */
    { 9024, "swa-2" },                          /* Secure Web Access - 2 */
    { 9025, "swa-3" },                          /* Secure Web Access - 3 */
    { 9026, "swa-4" },                          /* Secure Web Access - 4 */
    { 9080, "glrpc" },                          /* Groove GLRPC */
    { 9084, "aurora" },                         /* IBM AURORA Performance Visualizer */
    { 9085, "ibm-rsyscon" },                    /* IBM Remote System Console */
    { 9086, "net2display" },                    /* Vesa Net2Display */
    { 9087, "classic" },                        /* Classic Data Server */
    { 9088, "sqlexec" },                        /* IBM Informix SQL Interface */
    { 9089, "sqlexec-ssl" },                    /* IBM Informix SQL Interface - Encrypted */
    { 9090, "websm" },                          /* WebSM */
    { 9091, "xmltec-xmlmail" },
    { 9092, "XmlIpcRegSvc" },                   /* Xml-Ipc Server Reg */
    { 9100, "hp-pdl-datastr" },                 /* PDL Data Streaming Port */
    { 9101, "bacula-dir" },                     /* Bacula Director */
    { 9102, "bacula-fd" },                      /* Bacula File Daemon */
    { 9103, "bacula-sd" },                      /* Bacula Storage Daemon */
    { 9104, "peerwire" },                       /* PeerWire */
    { 9105, "xadmin" },                         /* Xadmin Control Service */
    { 9111, "hexxorecore" },                    /* Multiple Purpose, Distributed Message Bus */
    { 9119, "mxit" },                           /* MXit Instant Messaging */
    { 9131, "dddp" },                           /* Dynamic Device Discovery */
    { 9160, "apani1" },
    { 9161, "apani2" },
    { 9162, "apani3" },
    { 9163, "apani4" },
    { 9164, "apani5" },
    { 9191, "sun-as-jpda" },                    /* Sun AppSvr JPDA */
    { 9200, "wap-wsp" },                        /* WAP connectionless session service */
    { 9201, "wap-wsp-wtp" },                    /* WAP session service */
    { 9202, "wap-wsp-s" },                      /* WAP secure connectionless session service */
    { 9203, "wap-wsp-wtp-s" },                  /* WAP secure session service */
    { 9204, "wap-vcard" },                      /* WAP vCard */
    { 9205, "wap-vcal" },                       /* WAP vCal */
    { 9206, "wap-vcard-s" },                    /* WAP vCard Secure */
    { 9207, "wap-vcal-s" },                     /* WAP vCal Secure */
    { 9208, "rjcdb-vcards" },                   /* rjcdb vCard */
    { 9209, "almobile-system" },                /* ALMobile System Service */
    { 9210, "oma-mlp" },                        /* OMA Mobile Location Protocol */
    { 9211, "oma-mlp-s" },                      /* OMA Mobile Location Protocol Secure */
    { 9212, "serverviewdbms" },                 /* Server View dbms access */
    { 9213, "serverstart" },                    /* ServerStart RemoteControl */
    { 9214, "ipdcesgbs" },                      /* IPDC ESG BootstrapService */
    { 9215, "insis" },                          /* Integrated Setup and Install Service */
    { 9216, "acme" },                           /* Aionex Communication Management Engine */
    { 9217, "fsc-port" },                       /* FSC Communication Port */
    { 9222, "teamcoherence" },                  /* QSC Team Coherence */
    { 9255, "mon" },                            /* Manager On Network */
    { 9278, "pegasus" },                        /* Pegasus GPS Platform */
    { 9279, "pegasus-ctl" },                    /* Pegaus GPS System Control Interface */
    { 9280, "pgps" },                           /* Predicted GPS */
    { 9281, "swtp-port1" },                     /* SofaWare transport port 1 */
    { 9282, "swtp-port2" },                     /* SofaWare transport port 2 */
    { 9283, "callwaveiam" },                    /* CallWaveIAM */
    { 9284, "visd" },                           /* VERITAS Information Serve */
    { 9285, "n2h2server" },                     /* N2H2 Filter Service Port */
    { 9287, "cumulus" },                        /* Cumulus */
    { 9292, "armtechdaemon" },                  /* ArmTech Daemon */
    { 9293, "storview" },                       /* StorView Client */
    { 9294, "armcenterhttp" },                  /* ARMCenter http Service */
    { 9295, "armcenterhttps" },                 /* ARMCenter https Service */
    { 9300, "vrace" },                          /* Virtual Racing Service */
    { 9318, "secure-ts" },                      /* PKIX TimeStamp over TLS */
    { 9321, "guibase" },
    { 9343, "mpidcmgr" },                       /* MpIdcMgr */
    { 9344, "mphlpdmc" },                       /* Mphlpdmc */
    { 9346, "ctechlicensing" },                 /* C Tech Licensing */
    { 9374, "fjdmimgr" },
    { 9380, "boxp" },                           /* Brivs! Open Extensible Protocol */
    { 9396, "fjinvmgr" },
    { 9397, "mpidcagt" },                       /* MpIdcAgt */
    { 9400, "sec-t4net-srv" },                  /* Samsung Twain for Network Server */
    { 9401, "sec-t4net-clt" },                  /* Samsung Twain for Network Client */
    { 9402, "sec-pc2fax-srv" },                 /* Samsung PC2FAX for Network Server */
    { 9418, "git" },                            /* git pack transfer service */
    { 9443, "tungsten-https" },                 /* WSO2 Tungsten HTTPS */
    { 9444, "wso2esb-console" },                /* WSO2 ESB Administration Console HTTPS */
    { 9450, "sntlkeyssrvr" },                   /* Sentinel Keys Server */
    { 9500, "ismserver" },
    { 9535, "mngsuite" },                       /* Management Suite Remote Control */
    { 9536, "laes-bf" },                        /* Surveillance buffering function */
    { 9555, "trispen-sra" },                    /* Trispen Secure Remote Access */
    { 9592, "ldgateway" },                      /* LANDesk Gateway */
    { 9593, "cba8" },                           /* LANDesk Management Agent (cba8) */
    { 9594, "msgsys" },                         /* Message System */
    { 9595, "pds" },                            /* Ping Discovery Service */
    { 9596, "mercury-disc" },                   /* Mercury Discovery */
    { 9597, "pd-admin" },                       /* PD Administration */
    { 9598, "vscp" },                           /* Very Simple Ctrl Protocol */
    { 9599, "robix" },                          /* Robix */
    { 9600, "micromuse-ncpw" },                 /* MICROMUSE-NCPW */
    { 9612, "streamcomm-ds" },                  /* StreamComm User Directory */
    { 9618, "condor" },                         /* Condor Collector Service */
    { 9628, "odbcpathway" },                    /* ODBC Pathway Service */
    { 9629, "uniport" },                        /* UniPort SSO Controller */
    { 9667, "xmms2" },                          /* Cross-platform Music Multiplexing System */
    { 9668, "tec5-sdctp" },                     /* tec5 Spectral Device Control Protocol */
    { 9694, "client-wakeup" },                  /* T-Mobile Client Wakeup Message */
    { 9695, "ccnx" },                           /* Content Centric Networking */
    { 9700, "board-roar" },                     /* Board M.I.T. Service */
    { 9747, "l5nas-parchan" },                  /* L5NAS Parallel Channel */
    { 9750, "board-voip" },                     /* Board M.I.T. Synchronous Collaboration */
    { 9753, "rasadv" },
    { 9762, "tungsten-http" },                  /* WSO2 Tungsten HTTP */
    { 9800, "davsrc" },                         /* WebDav Source Port */
    { 9801, "sstp-2" },                         /* Sakura Script Transfer Protocol-2 */
    { 9802, "davsrcs" },                        /* WebDAV Source TLS/SSL */
    { 9875, "sapv1" },                          /* Session Announcement v1 */
    { 9888, "cyborg-systems" },                 /* CYBORG Systems */
    { 9889, "gt-proxy" },                       /* Port for Cable network related data proxy or repeater */
    { 9898, "monkeycom" },                      /* MonkeyCom */
    { 9900, "iua" },                            /* IUA */
    { 9909, "domaintime" },
    { 9911, "sype-transport" },                 /* SYPECom Transport Protocol */
    { 9950, "apc-9950" },                       /* APC 9950 */
    { 9951, "apc-9951" },                       /* APC 9951 */
    { 9952, "apc-9952" },                       /* APC 9952 */
    { 9953, "acis" },                           /* 9953 */
    { 9966, "odnsp" },                          /* OKI Data Network Setting Protocol */
    { 9987, "dsm-scm-target" },                 /* DSM/SCM Target Interface */
    { 9990, "osm-appsrvr" },                    /* OSM Applet Server */
    { 9991, "osm-oev" },                        /* OSM Event Server */
    { 9992, "palace-1" },                       /* OnLive-1 */
    { 9993, "palace-2" },                       /* OnLive-2 */
    { 9994, "palace-3" },                       /* OnLive-3 */
    { 9995, "palace-4" },                       /* Palace-4 */
    { 9996, "palace-5" },                       /* Palace-5 */
    { 9997, "palace-6" },                       /* Palace-6 */
    { 9998, "distinct32" },                     /* Distinct32 */
    { 9999, "distinct" },
    { 10000, "ndmp" },                          /* Network Data Management Protocol */
    { 10001, "scp-config" },                    /* SCP Configuration */
    { 10002, "documentum" },                    /* EMC-Documentum Content Server Product */
    { 10003, "documentum-s" },                  /* EMC-Documentum Content Server Product */
    { 10007, "mvs-capacity" },                  /* MVS Capacity */
    { 10008, "octopus" },                       /* Octopus Multiplexer */
    { 10009, "swdtp-sv" },                      /* Systemwalker Desktop Patrol */
    { 10050, "zabbix-agent" },                  /* Zabbix Agent */
    { 10051, "zabbix-trapper" },                /* Zabbix Trapper */
    { 10080, "amanda" },                        /* Amanda */
    { 10081, "famdc" },                         /* FAM Archive Server */
    { 10100, "itap-ddtp" },                     /* VERITAS ITAP DDTP */
    { 10101, "ezmeeting-2" },                   /* eZmeeting */
    { 10102, "ezproxy-2" },                     /* eZproxy */
    { 10103, "ezrelay" },                       /* eZrelay */
    { 10104, "swdtp" },                         /* Systemwalker Desktop Patrol */
    { 10107, "bctp-server" },                   /* VERITAS BCTP, server */
    { 10110, "nmea-0183" },                     /* NMEA-0183 Navigational Data */
    { 10113, "netiq-endpoint" },                /* NetIQ Endpoint */
    { 10114, "netiq-qcheck" },                  /* NetIQ Qcheck */
    { 10115, "netiq-endpt" },                   /* NetIQ Endpoint */
    { 10116, "netiq-voipa" },                   /* NetIQ VoIP Assessor */
    { 10117, "iqrm" },                          /* NetIQ IQCResource Managament Svc */
    { 10128, "bmc-perf-sd" },                   /* BMC-PERFORM-SERVICE DAEMON */
    { 10160, "qb-db-server" },                  /* QB Database Server */
    { 10200, "trisoap" },                       /* Trigence AE Soap Service */
    { 10252, "apollo-relay" },                  /* Apollo Relay Port */
    { 10260, "axis-wimp-port" },                /* Axis WIMP Port */
    { 10288, "blocks" },                        /* Blocks */
    { 10540, "MOS-lower" },                     /* MOS Media Object Metadata Port */
    { 10541, "MOS-upper" },                     /* MOS Running Order Port */
    { 10542, "MOS-aux" },                       /* MOS Low Priority Port */
    { 10543, "MOS-soap" },                      /* MOS SOAP Default Port */
    { 10544, "MOS-soap-opt" },                  /* MOS SOAP Optional Port */
    { 10800, "gap" },                           /* Gestor de Acaparamiento para Pocket PCs */
    { 10805, "lpdg" },                          /* LUCIA Pareja Data Group */
    { 10860, "helix" },                         /* Helix Client/Server */
    { 10880, "bveapi" },                        /* BVEssentials HTTP API */
    { 10990, "rmiaux" },                        /* Auxiliary RMI Port */
    { 11000, "irisa" },                         /* IRISA */
    { 11001, "metasys" },                       /* Metasys */
    { 11095, "weave" },                         /* Nest device-to-device and device-to-service application protocol */
    { 11106, "sgi-lk" },                        /* SGI LK Licensing service */
    { 11111, "vce" },                           /* Viral Computing Environment (VCE) */
    { 11112, "dicom" },                         /* DICOM */
    { 11161, "suncacao-snmp" },                 /* sun cacao snmp access point */
    { 11162, "suncacao-jmxmp" },                /* sun cacao JMX-remoting access point */
    { 11163, "suncacao-rmi" },                  /* sun cacao rmi registry access point */
    { 11164, "suncacao-csa" },                  /* sun cacao command-streaming access point */
    { 11165, "suncacao-websvc" },               /* sun cacao web service access point */
    { 11201, "smsqp" },
    { 11208, "wifree" },                        /* WiFree Service */
    { 11211, "memcache" },                      /* Memory cache service */
    { 11319, "imip" },                          /* IMIP */
    { 11320, "imip-channels" },                 /* IMIP Channels Port */
    { 11321, "arena-server" },                  /* Arena Server Listen */
    { 11367, "atm-uhas" },                      /* ATM UHAS */
    { 11371, "hkp" },                           /* OpenPGP HTTP Keyserver */
    { 11600, "tempest-port" },                  /* Tempest Protocol Port */
    { 11720, "h323callsigalt" },                /* H.323 Call Control Signalling Alternate */
    { 11723, "emc-xsw-dcache" },                /* EMC XtremSW distributed cache */
    { 11751, "intrepid-ssl" },                  /* Intrepid SSL */
    { 11876, "xoraya" },                        /* X2E Xoraya Multichannel protocol */
    { 11967, "sysinfo-sp" },                    /* SysInfo Service Protocol */
    { 12000, "entextxid" },                     /* IBM Enterprise Extender SNA XID Exchange */
    { 12001, "entextnetwk" },                   /* IBM Enterprise Extender SNA COS Network Priority */
    { 12002, "entexthigh" },                    /* IBM Enterprise Extender SNA COS High Priority */
    { 12003, "entextmed" },                     /* IBM Enterprise Extender SNA COS Medium Priority */
    { 12004, "entextlow" },                     /* IBM Enterprise Extender SNA COS Low Priority */
    { 12005, "dbisamserver1" },                 /* DBISAM Database Server - Regular */
    { 12006, "dbisamserver2" },                 /* DBISAM Database Server - Admin */
    { 12007, "accuracer" },                     /* Accuracer Database System Server */
    { 12008, "accuracer-dbms" },                /* Accuracer Database System Admin */
    { 12012, "vipera" },                        /* Vipera Messaging Service */
    { 12013, "vipera-ssl" },                    /* Vipera Messaging Service over SSL Communication */
    { 12109, "rets-ssl" },                      /* RETS over SSL */
    { 12121, "nupaper-ss" },                    /* NuPaper Session Service */
    { 12168, "cawas" },                         /* CA Web Access Service */
    { 12172, "hivep" },                         /* HiveP */
    { 12300, "linogridengine" },                /* LinoGrid Engine */
    { 12321, "warehouse-sss" },                 /* Warehouse Monitoring Syst SSS */
    { 12322, "warehouse" },                     /* Warehouse Monitoring Syst */
    { 12345, "italk" },                         /* Italk Chat System */
    { 12753, "tsaf" },                          /* tsaf port */
    { 13160, "i-zipqd" },                       /* I-ZIPQD */
    { 13216, "bcslogc" },                       /* Black Crow Software application logging */
    { 13217, "rs-pias" },                       /* R&S Proxy Installation Assistant Service */
    { 13223, "powwow-client" },                 /* PowWow Client */
    { 13224, "powwow-server" },                 /* PowWow Server */
    { 13720, "bprd" },                          /* BPRD Protocol (VERITAS NetBackup) */
    { 13721, "bpdbm" },                         /* BPDBM Protocol (VERITAS NetBackup) */
    { 13722, "bpjava-msvc" },                   /* BP Java MSVC Protocol */
    { 13724, "vnetd" },                         /* Veritas Network Utility */
    { 13782, "bpcd" },                          /* VERITAS NetBackup */
    { 13783, "vopied" },                        /* VOPIED Protocol */
    { 13785, "nbdb" },                          /* NetBackup Database */
    { 13786, "nomdb" },                         /* Veritas-nomdb */
    { 13818, "dsmcc-config" },                  /* DSMCC Config */
    { 13819, "dsmcc-session" },                 /* DSMCC Session Messages */
    { 13820, "dsmcc-passthru" },                /* DSMCC Pass-Thru Messages */
    { 13821, "dsmcc-download" },                /* DSMCC Download Protocol */
    { 13822, "dsmcc-ccp" },                     /* DSMCC Channel Change Protocol */
    { 13894, "ucontrol" },                      /* Ultimate Control communication protocol */
    { 13929, "dta-systems" },                   /* D-TA SYSTEMS */
    { 14000, "scotty-ft" },                     /* SCOTTY High-Speed Filetransfer */
    { 14001, "sua" },                           /* SUA */
    { 14033, "sage-best-com1" },                /* sage Best! Config Server 1 */
    { 14034, "sage-best-com2" },                /* sage Best! Config Server 2 */
    { 14141, "vcs-app" },                       /* VCS Application */
    { 14142, "icpp" },                          /* IceWall Cert Protocol */
    { 14145, "gcm-app" },                       /* GCM Application */
    { 14149, "vrts-tdd" },                      /* Veritas Traffic Director */
    { 14154, "vad" },                           /* Veritas Application Director */
    { 14250, "cps" },                           /* Fencing Server */
    { 14414, "ca-web-update" },                 /* CA eTrust Web Update Service */
    { 14936, "hde-lcesrvr-1" },
    { 14937, "hde-lcesrvr-2" },
    { 15000, "hydap" },                         /* Hypack Data Aquisition */
    { 15345, "xpilot" },                        /* XPilot Contact Port */
    { 15363, "3link" },                         /* 3Link Negotiation */
    { 15555, "cisco-snat" },                    /* Cisco Stateful NAT */
    { 15660, "bex-xr" },                        /* Backup Express Restore Server */
    { 15740, "ptp" },                           /* Picture Transfer Protocol */
    { 16161, "sun-sea-port" },                  /* Solaris SEA Port */
    { 16309, "etb4j" },
    { 16310, "pduncs" },                        /* Policy Distribute, Update Notification */
    { 16311, "pdefmns" },                       /* Policy definition and update management */
    { 16360, "netserialext1" },                 /* Network Serial Extension Ports One */
    { 16361, "netserialext2" },                 /* Network Serial Extension Ports Two */
    { 16367, "netserialext3" },                 /* Network Serial Extension Ports Three */
    { 16368, "netserialext4" },                 /* Network Serial Extension Ports Four */
    { 16384, "connected" },                     /* Connected Corp */
    { 16900, "newbay-snc-mc" },                 /* Newbay Mobile Client Update Service */
    { 16950, "sgcip" },                         /* Simple Generic Client Interface Protocol */
    { 16991, "intel-rci-mp" },                  /* INTEL-RCI-MP */
    { 16992, "amt-soap-http" },                 /* Intel(R) AMT SOAP/HTTP */
    { 16993, "amt-soap-https" },                /* Intel(R) AMT SOAP/HTTPS */
    { 16994, "amt-redir-tcp" },                 /* Intel(R) AMT Redirection/TCP */
    { 16995, "amt-redir-tls" },                 /* Intel(R) AMT Redirection/TLS */
    { 17007, "isode-dua" },
    { 17185, "soundsvirtual" },                 /* Sounds Virtual */
    { 17219, "chipper" },                       /* Chipper */
    { 17220, "avtp" },                          /* IEEE 1722 Transport Protocol for Time Sensitive Applications */
    { 17221, "avdecc" },                        /* IEEE 1722.1 AVB Discovery, Enumeration, Connection management, and Control */
    { 17225, "trdp-md" },                       /* Train Realtime Data Protocol (TRDP) Message Data */
    { 17234, "integrius-stp" },                 /* Integrius Secure Tunnel Protocol */
    { 17235, "ssh-mgmt" },                      /* SSH Tectia Manager */
    { 17729, "ea" },                            /* Eclipse Aviation */
    { 17754, "zep" },                           /* Encap. ZigBee Packets */
    { 17755, "zigbee-ip" },                     /* ZigBee IP Transport Service */
    { 17756, "zigbee-ips" },                    /* ZigBee IP Transport Secure Service */
    { 18000, "biimenu" },                       /* Beckman Instruments, Inc. */
    { 18181, "opsec-cvp" },                     /* OPSEC CVP */
    { 18182, "opsec-ufp" },                     /* OPSEC UFP */
    { 18183, "opsec-sam" },                     /* OPSEC SAM */
    { 18184, "opsec-lea" },                     /* OPSEC LEA */
    { 18185, "opsec-omi" },                     /* OPSEC OMI */
    { 18186, "ohsc" },                          /* Occupational Health SC */
    { 18187, "opsec-ela" },                     /* OPSEC ELA */
    { 18241, "checkpoint-rtm" },                /* Check Point RTM */
    { 18262, "gv-pf" },                         /* GV NetConfig Service */
    { 18463, "ac-cluster" },                    /* AC Cluster */
    { 18634, "rds-ib" },                        /* Reliable Datagram Service */
    { 18635, "rds-ip" },                        /* Reliable Datagram Service over IP */
    { 18769, "ique" },                          /* IQue Protocol */
    { 18881, "infotos" },                       /* Infotos */
    { 18888, "apc-necmp" },                     /* APCNECMP */
    { 19000, "igrid" },                         /* iGrid Server */
    { 19007, "scintilla" },                     /* Scintilla protocol for device services */
    { 19191, "opsec-uaa" },                     /* OPSEC UAA */
    { 19194, "ua-secureagent" },                /* UserAuthority SecureAgent */
    { 19283, "keysrvr" },                       /* Key Server for SASSAFRAS */
    { 19315, "keyshadow" },                     /* Key Shadow for SASSAFRAS */
    { 19398, "mtrgtrans" },
    { 19410, "hp-sco" },
    { 19411, "hp-sca" },
    { 19412, "hp-sessmon" },                    /* HP-SESSMON */
    { 19539, "fxuptp" },                        /* FXUPTP */
    { 19540, "sxuptp" },                        /* SXUPTP */
    { 19541, "jcp" },                           /* JCP Client */
    { 19999, "dnp-sec" },                       /* Distributed Network Protocol - Secure */
    { 20000, "dnp" },                           /* DNP */
    { 20001, "microsan" },                      /* MicroSAN */
    { 20002, "commtact-http" },                 /* Commtact HTTP */
    { 20003, "commtact-https" },                /* Commtact HTTPS */
    { 20005, "openwebnet" },                    /* OpenWebNet protocol for electric network */
    { 20014, "opendeploy" },                    /* OpenDeploy Listener */
    { 20034, "nburn-id" },                      /* NetBurner ID Port */
    { 20046, "tmophl7mts" },                    /* TMOP HL7 Message Transfer Service */
    { 20048, "mountd" },                        /* NFS mount protocol */
    { 20049, "nfsrdma" },                       /* Network File System (NFS) over RDMA */
    { 20167, "tolfab" },                        /* TOLfab Data Change */
    { 20202, "ipdtp-port" },                    /* IPD Tunneling Port */
    { 20222, "ipulse-ics" },                    /* iPulse-ICS */
    { 20480, "emwavemsg" },                     /* emWave Message Service */
    { 20670, "track" },                         /* Track */
    { 20999, "athand-mmp" },                    /* At Hand MMP */
    { 21000, "irtrans" },                       /* IRTrans Control */
    { 21554, "dfserver" },                      /* MineScape Design File Server */
    { 21590, "vofr-gateway" },                  /* VoFR Gateway */
    { 21800, "tvpm" },                          /* TVNC Pro Multiplexing */
    { 21845, "webphone" },
    { 21846, "netspeak-is" },                   /* NetSpeak Corp. Directory Services */
    { 21847, "netspeak-cs" },                   /* NetSpeak Corp. Connection Services */
    { 21848, "netspeak-acd" },                  /* NetSpeak Corp. Automatic Call Distribution */
    { 21849, "netspeak-cps" },                  /* NetSpeak Corp. Credit Processing System */
    { 22000, "snapenetio" },                    /* SNAPenetIO */
    { 22001, "optocontrol" },                   /* OptoControl */
    { 22002, "optohost002" },                   /* Opto Host Port 2 */
    { 22003, "optohost003" },                   /* Opto Host Port 3 */
    { 22004, "optohost004" },                   /* Opto Host Port 4 */
    { 22005, "optohost004" },                   /* Opto Host Port 5 */
    { 22273, "wnn6" },
    { 22305, "cis" },                           /* CompactIS Tunnel */
    { 22333, "showcockpit-net" },               /* ShowCockpit Networking */
    { 22343, "cis-secure" },                    /* CompactIS Secure Tunnel */
    { 22347, "wibukey" },                       /* WibuKey Standard WkLan */
    { 22350, "codemeter" },                     /* CodeMeter Standard */
    { 22763, "talikaserver" },                  /* Talika Main Server */
    { 22800, "aws-brf" },                       /* Telerate Information Platform LAN */
    { 22951, "brf-gw" },                        /* Telerate Information Platform WAN */
    { 23000, "inovaport1" },                    /* Inova LightLink Server Type 1 */
    { 23001, "inovaport2" },                    /* Inova LightLink Server Type 2 */
    { 23002, "inovaport3" },                    /* Inova LightLink Server Type 3 */
    { 23003, "inovaport4" },                    /* Inova LightLink Server Type 4 */
    { 23004, "inovaport5" },                    /* Inova LightLink Server Type 5 */
    { 23005, "inovaport6" },                    /* Inova LightLink Server Type 6 */
    { 23333, "elxmgmt" },                       /* Emulex HBAnyware Remote Management */
    { 23400, "novar-dbase" },                   /* Novar Data */
    { 23401, "novar-alarm" },                   /* Novar Alarm */
    { 23402, "novar-global" },                  /* Novar Global */
    { 24000, "med-ltp" },
    { 24001, "med-fsp-rx" },
    { 24002, "med-fsp-tx" },
    { 24003, "med-supp" },
    { 24004, "med-ovw" },
    { 24005, "med-ci" },
    { 24006, "med-net-svc" },
    { 24242, "filesphere" },                    /* fileSphere */
    { 24249, "vista-4gl" },                     /* Vista 4GL */
    { 24321, "ild" },                           /* Isolv Local Directory */
    { 24386, "intel-rci" },                     /* Intel RCI */
    { 24465, "tonidods" },                      /* Tonido Domain Server */
    { 24554, "binkp" },                         /* BINKP */
    { 24676, "canditv" },                       /* Canditv Message Service */
    { 24677, "flashfiler" },                    /* FlashFiler */
    { 24678, "proactivate" },                   /* Turbopower Proactivate */
    { 24680, "tcc-http" },                      /* TCC User HTTP Service */
    { 24922, "find" },                          /* Find Identification of Network Devices */
    { 25000, "icl-twobase1" },
    { 25001, "icl-twobase2" },
    { 25002, "icl-twobase3" },
    { 25003, "icl-twobase4" },
    { 25004, "icl-twobase5" },
    { 25005, "icl-twobase6" },
    { 25006, "icl-twobase7" },
    { 25007, "icl-twobase8" },
    { 25008, "icl-twobase9" },
    { 25009, "icl-twobase10" },
    { 25793, "vocaltec-hos" },                  /* Vocaltec Address Server */
    { 25900, "tasp-net" },                      /* TASP Network Comm */
    { 25901, "niobserver" },                    /* NIObserver */
    { 25902, "nilinkanalyst" },                 /* NILinkAnalyst */
    { 25903, "niprobe" },                       /* NIProbe */
    { 26000, "quake" },
    { 26133, "scscp" },                         /* Symbolic Computation Software Composability Protocol */
    { 26208, "wnn6-ds" },
    { 26260, "ezproxy" },                       /* eZproxy */
    { 26261, "ezmeeting" },                     /* eZmeeting */
    { 26262, "k3software-svr" },                /* K3 Software-Server */
    { 26263, "k3software-cli" },                /* K3 Software-Client */
    { 26487, "exoconfig" },                     /* EXOconfig */
    { 26489, "exonet" },                        /* EXOnet */
    { 27345, "imagepump" },                     /* ImagePump */
    { 27442, "jesmsjc" },                       /* Job controller service */
    { 27504, "kopek-httphead" },                /* Kopek HTTP Head Port */
    { 27782, "ars-vista" },                     /* ARS VISTA Application */
    { 27999, "tw-auth-key" },                   /* TW Authentication/Key Distribution and */
    { 28000, "nxlmd" },                         /* NX License Manager */
    { 28200, "voxelstorm" },                    /* VoxelStorm game server */
    { 28240, "siemensgsm" },                    /* Siemens GSM */
    { 29167, "otmp" },                          /* ObTools Message Protocol */
    { 30001, "pago-services1" },                /* Pago Services 1 */
    { 30002, "pago-services2" },                /* Pago Services 2 */
    { 30003, "amicon-fpsu-ra" },                /* Amicon FPSU-IP Remote Administration */
    { 30260, "kingdomsonline" },                /* Kingdoms Online (CraigAvenue) */
    { 30999, "ovobs" },                         /* OpenView Service Desk Client */
    { 31337, "eldim" },                         /* eldim is a secure file upload proxy */
    { 31416, "xqosd" },                         /* XQoS network monitor */
    { 31457, "tetrinet" },                      /* TetriNET Protocol */
    { 31620, "lm-mon" },
    { 31765, "gamesmith-port" },                /* GameSmith Port */
    { 31948, "iceedcp-tx" },                    /* Embedded Device Configuration Protocol TX */
    { 31949, "iceedcp-rx" },                    /* Embedded Device Configuration Protocol RX */
    { 32034, "iracinghelper" },                 /* iRacing helper service */
    { 32249, "t1distproc60" },                  /* T1 Distributed Processor */
    { 32483, "apm-link" },                      /* Access Point Manager Link */
    { 32635, "sec-ntb-clnt" },                  /* SecureNotebook-CLNT */
    { 32636, "DMExpress" },
    { 32767, "filenet-powsrm" },                /* FileNet BPM WS-ReliableMessaging Client */
    { 32768, "filenet-tms" },                   /* Filenet TMS */
    { 32769, "filenet-rpc" },                   /* Filenet RPC */
    { 32770, "filenet-nch" },                   /* Filenet NCH */
    { 32771, "filenet-rmi" },                   /* FileNET RMI */
    { 32772, "filenet-pa" },                    /* FileNET Process Analyzer */
    { 32773, "filenet-cm" },                    /* FileNET Component Manager */
    { 32774, "filenet-re" },                    /* FileNET Rules Engine */
    { 32775, "filenet-pch" },                   /* Performance Clearinghouse */
    { 32776, "filenet-peior" },                 /* FileNET BPM IOR */
    { 32777, "filenet-obrok" },                 /* FileNet BPM CORBA */
    { 32801, "mlsn" },                          /* Multiple Listing Service Network */
    { 32896, "idmgratm" },                      /* Attachmate ID Manager */
    { 33123, "aurora-balaena" },                /* Aurora (Balaena Ltd) */
    { 33331, "diamondport" },                   /* DiamondCentral Interface */
    { 33434, "traceroute" },                    /* traceroute use */
    { 33656, "snip-slave" },                    /* SNIP Slave */
    { 34249, "turbonote-2" },                   /* TurboNote Relay Server Default Port */
    { 34378, "p-net-local" },                   /* P-Net on IP local */
    { 34379, "p-net-remote" },                  /* P-Net on IP remote */
    { 34962, "profinet-rt" },                   /* PROFInet RT Unicast */
    { 34963, "profinet-rtm" },                  /* PROFInet RT Multicast */
    { 34964, "profinet-cm" },                   /* PROFInet Context Manager */
    { 34980, "ethercat" },                      /* EtherCAT Port */
    { 35001, "rt-viewer" },                     /* ReadyTech Viewer */
    { 35004, "rt-classmanager" },               /* ReadyTech ClassManager */
    { 35100, "axio-disc" },                     /* Axiomatic discovery protocol */
    { 36001, "allpeers" },                      /* AllPeers Network */
    { 36865, "kastenxpipe" },                   /* KastenX Pipe */
    { 37475, "neckar" },                        /* science + computing's Venus Administration Port */
    { 37654, "unisys-eportal" },                /* Unisys ClearPath ePortal */
    { 38201, "galaxy7-data" },                  /* Galaxy7 Data Tunnel */
    { 38202, "fairview" },                      /* Fairview Message Service */
    { 38203, "agpolicy" },                      /* AppGate Policy Server */
    { 39681, "turbonote-1" },                   /* TurboNote Default Port */
    { 40000, "safetynetp" },                    /* SafetyNET p */
    { 40841, "cscp" },                          /* CSCP */
    { 40842, "csccredir" },                     /* CSCCREDIR */
    { 40843, "csccfirewall" },                  /* CSCCFIREWALL */
    { 41111, "fs-qos" },                        /* Foursticks QoS Protocol */
    { 41230, "z-wave-s" },                      /* Z-Wave Protocol over SSL/TLS */
    { 41794, "crestron-cip" },                  /* Crestron Control Port */
    { 41795, "crestron-ctp" },                  /* Crestron Terminal Port */
    { 42508, "candp" },                         /* Computer Associates network discovery protocol */
    { 42509, "candrp" },                        /* CA discovery response */
    { 42510, "caerpc" },                        /* CA eTrust RPC */
    { 43188, "reachout" },                      /* REACHOUT */
    { 43189, "ndm-agent-port" },                /* NDM-AGENT-PORT */
    { 43190, "ip-provision" },                  /* IP-PROVISION */
    { 43441, "ciscocsdb" },                     /* Cisco NetMgmt DB Ports */
    { 44321, "pmcd" },                          /* PCP server (pmcd) */
    { 44322, "pmcdproxy" },                     /* PCP server (pmcd) proxy */
    { 44553, "rbr-debug" },                     /* REALbasic Remote Debug */
    { 44818, "EtherNet-IP-2" },                 /* EtherNet/IP messaging */
    { 45054, "invision-ag" },                   /* InVision AG */
    { 45678, "eba" },                           /* EBA PRISE */
    { 45825, "qdb2service" },                   /* Qpuncture Data Access Service */
    { 45966, "ssr-servermgr" },                 /* SSRServerMgr */
    { 46999, "mediabox" },                      /* MediaBox Server */
    { 47000, "mbus" },                          /* Message Bus */
    { 47557, "dbbrowse" },                      /* Databeam Corporation */
    { 47624, "directplaysrvr" },                /* Direct Play Server */
    { 47806, "ap" },                            /* ALC Protocol */
    { 47808, "bacnet" },                        /* Building Automation and Control Networks */
    { 48000, "nimcontroller" },                 /* Nimbus Controller */
    { 48001, "nimspooler" },                    /* Nimbus Spooler */
    { 48002, "nimhub" },                        /* Nimbus Hub */
    { 48003, "nimgtw" },                        /* Nimbus Gateway */
    { 48128, "isnetserv" },                     /* Image Systems Network Services */
    { 48129, "blp5" },                          /* Bloomberg locator */
    { 48556, "com-bardac-dw" },
    { 48619, "iqobject" },
    { 48653, "robotraconteur" },                /* Robot Raconteur transport */
};

static ws_services_entry_t global_tcp_services_table[] = {
    { 113, "ident" },
    { 143, "imap" },                            /* Internet Message Access Protocol */
    { 271, "pt-tls" },                          /* IETF Network Endpoint Assessment (NEA) Posture Transport Protocol over TLS (PT-TLS) */
    { 323, "rpki-rtr" },                        /* Resource PKI to Router Protocol */
    { 324, "rpki-rtr-tls" },                    /* Resource PKI to Router Protocol over TLS */
    { 456, "macon-tcp" },
    { 465, "urd" },                             /* URL Rendezvous Directory for SSM */
    { 474, "tn-tl-w1" },
    { 512, "exec" },                            /* remote process execution; authentication performed using passwords and UNIX login names */
    { 513, "login" },                           /* remote login a la telnet; automatic authentication performed based on priviledged port numbers and distributed data bases which identify "authentication domains" */
    { 514, "shell" },                           /* cmd like exec, but automatic authentication is performed as for login server */
    { 520, "efs" },                             /* extended file name server */
    { 623, "oob-ws-http" },                     /* DMTF out-of-band web services management protocol */
    { 664, "oob-ws-https" },                    /* DMTF out-of-band secure web services management protocol */
    { 750, "rfile" },
    { 773, "submit" },
    { 774, "rpasswd" },
    { 775, "entomb" },
    { 861, "owamp-control" },                   /* OWAMP-Control */
    { 862, "twamp-control" },                   /* TWAMP-Control */
    { 953, "rndc" },                            /* BIND9 remote name daemon controller */
    { 993, "imaps" },                           /* IMAP over TLS protocol */
    { 998, "busboy" },
    { 999, "garcon" },
    { 1001, "webpush" },                        /* HTTP Web Push */
    { 1110, "webadmstart" },                    /* Start web admin server */
    { 1182, "accelenet" },                      /* AcceleNet Control */
    { 1407, "tibet-server" },                   /* TIBET Data Server */
    { 1549, "shivahose" },                      /* Shiva Hose */
    { 1580, "tn-tl-r1" },
    { 1596, "radio-sm" },
    { 1676, "netcomm1" },
    { 1753, "predatar-comms" },                 /* Predatar Comms Service */
    { 1775, "vdab" },                           /* data interchange between visual processing containers */
    { 2001, "dc" },
    { 2004, "mailbox" },
    { 2005, "berknet" },
    { 2006, "invokator" },
    { 2007, "dectalk" },
    { 2008, "conf" },
    { 2009, "news" },
    { 2010, "search" },
    { 2011, "raid-cc" },                        /* raid */
    { 2012, "ttyinfo" },
    { 2013, "raid-am" },
    { 2014, "troff" },
    { 2015, "cypress" },
    { 2017, "cypress-stat" },
    { 2018, "terminaldb" },
    { 2019, "whosockami" },
    { 2021, "servexec" },
    { 2022, "down" },
    { 2025, "ellpack" },
    { 2187, "ssmc" },                           /* Sepehr System Management Control */
    { 2188, "radware-rpm" },                    /* Radware Resource Pool Manager */
    { 2189, "radware-rpm-s" },                  /* Secure Radware Resource Pool Manager */
    { 2225, "rcip-itu" },                       /* Resource Connection Initiation Protocol */
    { 2371, "rda" },                            /* Remote Device Access */
    { 2373, "remographlm" },                    /* Remograph License Manager */
    { 2374, "hydra" },                          /* Hydra RPC */
    { 2375, "docker" },                         /* Docker REST API (plain text) */
    { 2376, "docker-s" },                       /* Docker REST API (ssl) */
    { 2377, "swarm" },                          /* RPC interface for Docker Swarm */
    { 2379, "etcd-client" },                    /* etcd client communication */
    { 2380, "etcd-server" },                    /* etcd server to server communication */
    { 2384, "sd-request" },                     /* SD-REQUEST */
    { 2408, "railgun-webaccl" },                /* CloudFlare Railgun Web Acceleration Protocol */
    { 2802, "veritas-tcp1" },                   /* Veritas TCP1 */
    { 2855, "msrp" },                           /* MSRP over TCP */
    { 2905, "m3ua" },                           /* M3UA */
    { 3001, "origo-native" },                   /* OrigoDB Server Native Interface */
    { 3010, "gw" },                             /* Telerate Workstation */
    { 3071, "xplat-replicate" },                /* Crossplatform replication protocol */
    { 3104, "autocuelog" },                     /* Autocue Logger Protocol */
    { 3121, "pcmk-remote" },                    /* The pacemaker remote (pcmk-remote) service extends high availability functionality outside of the Linux cluster into remote nodes. */
    { 3300, "ceph" },                           /* Ceph monitor */
    { 3386, "gprs-data" },                      /* GPRS Data */
    { 3487, "ltctcp" },                         /* LISA TCP Transfer Channel */
    { 3519, "nvmsgd" },                         /* Netvion Messenger Port */
    { 3565, "m2pa" },                           /* M2PA */
    { 3566, "quest-data-hub" },                 /* Quest Data Hub */
    { 3574, "dmaf-server" },                    /* DMAF Server */
    { 3693, "easl" },                           /* Emergency Automatic Structure Lockdown System */
    { 3737, "xpanel" },                         /* XPanel Daemon */
    { 3766, "sitewatch-s" },                    /* SSL e-watch sitewatch server */
    { 3841, "shiprush-db-svr" },                /* ShipRush Database Server */
    { 3863, "asap-tcp" },                       /* asap tcp port */
    { 3864, "asap-tcp-tls" },                   /* asap/tls tcp port */
    { 3868, "diameter" },                       /* DIAMETER */
    { 4078, "cssp" },                           /* Coordinated Security Service Protocol */
    { 4085, "ezmessagesrv" },                   /* EZNews Newsroom Message Service */
    { 4087, "applusservice" },                  /* APplus Service */
    { 4088, "npsp" },                           /* Noah Printing Service Protocol */
    { 4120, "minirem" },                        /* MiniRem Remote Telemetry and Control */
    { 4169, "iadt" },                           /* Automation Drive Interface Transport */
    { 4170, "d-cinema-csp" },                   /* SMPTE Content Synchonization Protocol */
    { 4171, "ml-svnet" },                       /* Maxlogic Supervisor Communication */
    { 4174, "smcluster" },                      /* StorMagic Cluster Services */
    { 4175, "bccp" },                           /* Brocade Cluster Communication Protocol */
    { 4176, "tl-ipcproxy" },                    /* Translattice Cluster IPC Proxy */
    { 4186, "boxbackupstore" },                 /* Box Backup Store Service */
    { 4187, "csc-proxy" },                      /* Cascade Proxy */
    { 4189, "pcep" },                           /* Path Computation Element Communication Protocol */
    { 4190, "sieve" },                          /* ManageSieve Protocol */
    { 4192, "azeti" },                          /* Azeti Agent Service */
    { 4193, "pvxplusio" },                      /* PxPlus remote file srvr */
    { 4194, "spdm" },                           /* Security Protocol and Data Model */
    { 4311, "p6ssmc" },                         /* P6R Secure Server Management Console */
    { 4312, "pscl-mgt" },                       /* Parascale Membership Manager */
    { 4313, "perrla" },                         /* PERRLA User Services */
    { 4314, "choiceview-agt" },                 /* ChoiceView Agent */
    { 4316, "choiceview-clt" },                 /* ChoiceView Client */
    { 4317, "opentelemetry" },                  /* OpenTelemetry Protocol */
    { 4325, "geognosisadmin" },                 /* Cadcorp GeognoSIS Administrator */
    { 4329, "publiqare-sync" },                 /* PubliQare Distributed Environment Synchronisation Engine */
    { 4330, "dey-sapi" },                       /* DEY Storage Administration REST API */
    { 4331, "ktickets-rest" },                  /* ktickets REST API for event management and ticketing systems (embedded POS devices) */
    { 4332, "getty-focus" },                    /* Getty Images FOCUS service */
    { 4334, "netconf-ch-ssh" },                 /* NETCONF Call Home (SSH) */
    { 4335, "netconf-ch-tls" },                 /* NETCONF Call Home (TLS) */
    { 4336, "restconf-ch-tls" },                /* RESTCONF Call Home (TLS) */
    { 4360, "matrix-vnet" },                    /* Matrix VNet Communication Protocol */
    { 4371, "l2c-control" },                    /* LAN2CAN Control */
    { 4374, "psi-ptt" },                        /* PSI Push-to-Talk Protocol */
    { 4391, "apwi-imserver" },                  /* American Printware IMServer Protocol */
    { 4392, "apwi-rxserver" },                  /* American Printware RXServer Protocol */
    { 4393, "apwi-rxspooler" },                 /* American Printware RXSpooler Protocol */
    { 4396, "fly" },                            /* Fly Object Space */
    { 4407, "nacagent" },                       /* Network Access Control Agent */
    { 4408, "slscc" },                          /* SLS Technology Control Centre */
    { 4409, "netcabinet-com" },                 /* Net-Cabinet comunication */
    { 4410, "itwo-server" },                    /* RIB iTWO Application Server */
    { 4411, "found" },                          /* Found Messaging Protocol */
    { 4413, "avi-nms" },                        /* AVI Systems NMS */
    { 4414, "updog" },                          /* Updog Monitoring and Status Framework */
    { 4415, "brcd-vr-req" },                    /* Brocade Virtual Router Request */
    { 4416, "pjj-player" },                     /* PJJ Media Player */
    { 4417, "workflowdir" },                    /* Workflow Director Communication */
    { 4419, "cbp" },                            /* Colnod Binary Protocol */
    { 4421, "scaleft" },                        /* Multi-Platform Remote Management for Cloud Infrastructure */
    { 4422, "tsepisp" },                        /* TSEP Installation Service Protocol */
    { 4423, "thingkit" },                       /* thingkit secure mesh */
    { 4427, "drizzle" },                        /* Drizzle database server */
    { 4428, "omviserver" },                     /* OMV-Investigation Server-Client */
    { 4429, "omviagent" },                      /* OMV Investigation Agent-Server */
    { 4431, "wspipe" },                         /* adWISE Pipe */
    { 4433, "vop" },                            /* Versile Object Protocol */
    { 4460, "ntske" },                          /* Network Time Security Key Establishment */
    { 4485, "assyst-dr" },                      /* Assyst Data Repository Service */
    { 4487, "prex-tcp" },                       /* Protocol for Remote Execution over TCP */
    { 4553, "icshostsvc" },                     /* ICS host services */
    { 4563, "amahi-anywhere" },                 /* Amahi Anywhere */
    { 4570, "deploymentmap" },                  /* Service to distribute and update within a site deployment information for Oracle Communications Suite */
    { 4573, "cardifftec-back" },                /* A port for communication between a server and client for a custom backup system */
    { 4590, "rid" },                            /* RID over HTTP/TLS */
    { 4602, "mtsserver" },                      /* EAX MTS Server */
    { 4603, "menandmice-upg" },                 /* Men & Mice Upgrade Agent */
    { 4604, "irp" },                            /* Identity Registration Protocol */
    { 4605, "sixchat" },                        /* Direct End to End Secure Chat Protocol */
    { 4606, "sixid" },                          /* Secure ID to IP registration and lookup */
    { 4703, "npqes-test" },                     /* Network Performance Quality Evaluation System Test Service */
    { 4704, "assuria-ins" },                    /* Assuria Insider */
    { 4727, "fcis" },                           /* F-Link Client Information Service */
    { 4731, "remcap" },                         /* Remote Capture Protocol */
    { 4733, "resorcs" },                        /* RES Orchestration Catalog Services */
    { 4742, "sicct" },                          /* SICCT */
    { 4753, "simon" },                          /* Simple Invocation of Methods Over Network (SIMON) */
    { 4756, "RDCenter" },                       /* Reticle Decision Center */
    { 4774, "converge" },                       /* Converge RPC */
    { 4786, "smart-install" },                  /* Smart Install Service */
    { 4787, "sia-ctrl-plane" },                 /* Service Insertion Architecture (SIA) Control-Plane */
    { 4788, "xmcp" },                           /* eXtensible Messaging Client Protocol */
    { 4803, "notateit" },                       /* Notateit Messaging */
    { 4840, "opcua-tcp" },                      /* OPC UA Connection Protocol */
    { 4879, "wsdl-event" },                     /* WSDL Event Receiver */
    { 4880, "hislip" },                         /* IVI High-Speed LAN Instrument Protocol */
    { 4883, "wmlserver" },                      /* Meier-Phelps License Server */
    { 4888, "xcap-portal" },                    /* xcap code analysis portal public user access */
    { 4889, "xcap-control" },                   /* xcap code analysis portal cluster control and administration */
    { 4901, "flr-agent" },                      /* FileLocator Remote Search Agent */
    { 4902, "magiccontrol" },                   /* magicCONROL RF and Data Interface */
    { 4912, "lutap" },                          /* Technicolor LUT Access Protocol */
    { 4913, "lutcp" },                          /* LUTher Control Protocol */
    { 4915, "frcs" },                           /* Fibics Remote Control Service */
    { 4953, "dbsyncarbiter" },                  /* Synchronization Arbiter */
    { 4971, "burp" },                           /* BackUp and Restore Program */
    { 4984, "webyast" },                        /* WebYast */
    { 4985, "gerhcs" },                         /* GER HC Standard */
    { 5015, "fmwp" },                           /* FileMaker, Inc. - Web publishing */
    { 5028, "qvr" },                            /* Quiqum Virtual Relais */
    { 5032, "signacert-agent" },                /* SignaCert Enterprise Trust Server Agent */
    { 5033, "jtnetd-server" },                  /* Janstor Secure Data */
    { 5034, "jtnetd-status" },                  /* Janstor Status */
    { 5045, "osp" },                            /* Open Settlement Protocol */
    { 5048, "texai" },                          /* Texai Message Service */
    { 5053, "rlm" },                            /* RLM License Server */
    { 5054, "rlm-admin" },                      /* RLM administrative interface */
    { 5063, "csrpc" },                          /* centrify secure RPC */
    { 5068, "bitforestsrv" },                   /* Bitforest Data Service */
    { 5075, "pvaccess" },                       /* Experimental Physics and Industrial Control System */
    { 5086, "aprigo-cs" },                      /* Aprigo Collection Service */
    { 5087, "biotic" },                         /* BIOTIC - Binary Internet of Things Interoperable Communication */
    { 5101, "talarian-tcp" },                   /* Talarian_TCP */
    { 5103, "actifio-c2c" },                    /* Actifio C2C */
    { 5106, "actifioudsagent" },                /* Actifio UDS Agent */
    { 5107, "actifioreplic" },                  /* Disk to Disk replication between Actifio Clusters */
    { 5114, "ev-services" },                    /* Enterprise Vault Services */
    { 5115, "autobuild" },                      /* Symantec Autobuild Service */
    { 5117, "gradecam" },                       /* GradeCam Image Processing */
    { 5134, "ppactivation" },                   /* PP ActivationServer */
    { 5135, "erp-scale" },                      /* ERP-Scale */
    { 5146, "social-alarm" },                   /* Social Alarm Service */
    { 5156, "rugameonline" },                   /* Russian Online Game */
    { 5157, "mediat" },                         /* Mediat Remote Object Exchange */
    { 5161, "snmpssh" },                        /* SNMP over SSH Transport Model */
    { 5162, "snmpssh-trap" },                   /* SNMP Notification over SSH Transport Model */
    { 5163, "sbackup" },                        /* Shadow Backup */
    { 5164, "vpa" },                            /* Virtual Protocol Adapter */
    { 5172, "pcoip-mgmt" },                     /* PC over IP Endpoint Management */
    { 5194, "cpscomm" },                        /* CipherPoint Config Service */
    { 5195, "ampl-lic" },                       /* The protocol is used by a license server and client programs to control use of program licenses that float to networked machines */
    { 5196, "ampl-tableproxy" },                /* The protocol is used by two programs that exchange "table" data used in the AMPL modeling language */
    { 5197, "tunstall-lwp" },                   /* Tunstall Lone worker device interface */
    { 5209, "nomad" },                          /* Nomad Device Video Transfer */
    { 5215, "noteza" },                         /* NOTEZA Data Safety Service */
    { 5221, "3exmp" },                          /* 3eTI Extensible Management Protocol for OAMP */
    { 5222, "xmpp-client" },                    /* XMPP Client Connection */
    { 5228, "hpvroom" },                        /* HP Virtual Room Service */
    { 5229, "jaxflow" },                        /* Netflow/IPFIX/sFlow Collector and Forwarder Management */
    { 5230, "jaxflow-data" },                   /* JaxMP RealFlow application and protocol data */
    { 5231, "crusecontrol" },                   /* Remote Control of Scan Software for Cruse Scanners */
    { 5232, "csedaemon" },                      /* Cruse Scanning System Service */
    { 5233, "enfs" },                           /* Etinnae Network File Service */
    { 5242, "attune" },                         /* ATTUne API */
    { 5243, "xycstatus" },                      /* xyClient Status API and rendevous point */
    { 5245, "downtools" },                      /* DownTools Control Protocol */
    { 5253, "kpdp" },                           /* Kohler Power Device Protocol */
    { 5254, "logcabin" },                       /* LogCabin storage service */
    { 5269, "xmpp-server" },                    /* XMPP Server Connection */
    { 5271, "cuelink" },                        /* StageSoft CueLink messaging */
    { 5280, "xmpp-bosh" },                      /* Bidirectional-streams Over Synchronous HTTP (BOSH) */
    { 5281, "undo-lm" },                        /* Undo License Manager */
    { 5316, "hpbladems" },                      /* HPBladeSystem Monitor Service */
    { 5317, "hpdevms" },                        /* HP Device Monitor Service */
    { 5318, "pkix-cmc" },                       /* PKIX Certificate Management using CMS (CMC) */
    { 5320, "bsfserver-zn" },                   /* Webservices-based Zn interface of BSF */
    { 5321, "bsfsvr-zn-ssl" },                  /* Webservices-based Zn interface of BSF over SSL */
    { 5445, "smbdirect" },                      /* Server Message Block over Remote Direct Memory Access */
    { 5450, "tiepie" },                         /* TiePie engineering data acquisition */
    { 5470, "apsolab-col" },                    /* The Apsolab company's data collection protocol (native api) */
    { 5471, "apsolab-cols" },                   /* The Apsolab company's secure data collection protocol (native api) */
    { 5472, "apsolab-tag" },                    /* The Apsolab company's dynamic tag protocol */
    { 5473, "apsolab-tags" },                   /* The Apsolab company's secure dynamic tag protocol */
    { 5475, "apsolab-data" },                   /* The Apsolab company's data retrieval protocol */
    { 5507, "psl-management" },                 /* PowerSysLab Electrical Management */
    { 5550, "cbus" },                           /* Model Railway control using the CBUS message protocol */
    { 5557, "farenet" },                        /* Sandlab FARENET */
    { 5565, "dp-bura" },                        /* Data Protector BURA */
    { 5566, "westec-connect" },                 /* Westec Connect */
    { 5569, "rdmnet-ctrl" },                    /* PLASA E1.33, Remote Device Management (RDM) controller status notifications */
    { 5574, "lsi-bobcat" },                     /* SAS IO Forwarding */
    { 5575, "ora-oap" },                        /* Oracle Access Protocol */
    { 5579, "fdtracks" },                       /* FleetDisplay Tracking Service */
    { 5586, "att-mt-sms" },                     /* Planning to send mobile terminated SMS to the specific port so that the SMS is not visible to the client */
    { 5618, "efr" },                            /* Fiscal Registering Protocol */
    { 5635, "sfmsso" },                         /* SFM Authentication Subsystem */
    { 5636, "sfm-db-server" },                  /* SFMdb - SFM DB server */
    { 5637, "cssc" },                           /* Symantec CSSC */
    { 5638, "flcrs" },                          /* Symantec Fingerprint Lookup and Container Reference Service */
    { 5639, "ics" },                            /* Symantec Integrity Checking Service */
    { 5646, "vfmobile" },                       /* Ventureforth Mobile */
    { 5666, "nrpe" },                           /* Nagios Remote Plugin Executor */
    { 5670, "filemq" },                         /* ZeroMQ file publish-subscribe protocol */
    { 5693, "rbsystem" },                       /* Robert Bosch Data Transfer */
    { 5696, "kmip" },                           /* Key Management Interoperability Protocol */
    { 5700, "supportassist" },                  /* Dell SupportAssist data center management */
    { 5705, "storageos" },                      /* StorageOS REST API */
    { 5725, "ms-ilm" },                         /* Microsoft Identity Lifecycle Manager */
    { 5726, "ms-ilm-sts" },                     /* Microsoft Lifecycle Manager Secure Token Service */
    { 5727, "asgenf" },                         /* ASG Event Notification Framework */
    { 5728, "io-dist-data" },                   /* Dist. I/O Comm. Service Data and Control */
    { 5780, "vts-rpc" },                        /* Visual Tag System RPC */
    { 5798, "enlabel-dpl" },                    /* Proprietary Website deployment service */
    { 5820, "autopassdaemon" },                 /* AutoPass licensing */
    { 5841, "shiprush-d-ch" },                  /* Z-firm ShipRush interface for web access and bidirectional data */
    { 5842, "reversion" },                      /* Reversion Backup/Restore */
    { 5868, "diameters" },                      /* Diameter over TLS/TCP */
    { 5883, "jute" },                           /* Javascript Unit Test Environment */
    { 5993, "cim-rs" },                         /* DMTF WBEM CIM REST */
    { 5994, "rms-agent" },                      /* RMS Agent Listening Service */
    { 6068, "gsmp-ancp" },                      /* GSMP/ANCP */
    { 6075, "dpm-acm" },                        /* Microsoft DPM Access Control Manager */
    { 6076, "msft-dpm-cert" },                  /* Microsoft DPM WCF Certificates */
    { 6077, "iconstructsrv" },                  /* iConstruct Server */
    { 6084, "reload-config" },                  /* Peer to Peer Infrastructure Configuration */
    { 6088, "doglms" },                         /* SuperDog License Manager */
    { 6099, "raxa-mgmt" },                      /* RAXA Management */
    { 6113, "dayliteserver" },                  /* Daylite Server */
    { 6114, "wrspice" },                        /* WRspice IPC Service */
    { 6115, "xic" },                            /* Xic IPC Service */
    { 6116, "xtlserv" },                        /* XicTools License Manager Service */
    { 6117, "daylitetouch" },                   /* Daylite Touch Sync */
    { 6121, "spdy" },                           /* SPDY for a faster web */
    { 6130, "damewaremobgtwy" },                /* The DameWare Mobile Gateway Service */
    { 6159, "efb-aci" },                        /* EFB Application Control Interface */
    { 6160, "ecmp" },                           /* Emerson Extensible Control and Management Protocol */
    { 6241, "jeol-nsdtp-1" },                   /* JEOL Network Services Data Transport Protocol 1 */
    { 6242, "jeol-nsdtp-2" },                   /* JEOL Network Services Data Transport Protocol 2 */
    { 6243, "jeol-nsdtp-3" },                   /* JEOL Network Services Data Transport Protocol 3 */
    { 6244, "jeol-nsdtp-4" },                   /* JEOL Network Services Data Transport Protocol 4 */
    { 6267, "gld" },                            /* GridLAB-D User Interface */
    { 6315, "scup" },                           /* Sensor Control Unit Protocol */
    { 6317, "nav-data-cmd" },                   /* Navtech Radar Sensor Data Command */
    { 6324, "hrd-ncs" },                        /* HR Device Network Configuration Service */
    { 6325, "dt-mgmtsvc" },                     /* Double-Take Management Service */
    { 6326, "dt-vra" },                         /* Double-Take Virtual Recovery Assistant */
    { 6344, "streletz" },                       /* Argus-Spectr security and fire-prevention systems service */
    { 6379, "redis" },                          /* An advanced key-value cache and store */
    { 6418, "syserverremote" },                 /* SYserver remote commands */
    { 6419, "svdrp" },                          /* Simple VDR Protocol */
    { 6432, "pgbouncer" },                      /* PgBouncer */
    { 6440, "heliosd" },                        /* heliosd daemon */
    { 6442, "tarp" },                           /* Transitory Application Request Protocol */
    { 6513, "netconf-tls" },                    /* NETCONF over TLS */
    { 6556, "checkmk-agent" },                  /* Checkmk Monitoring Agent */
    { 6568, "canit-store" },                    /* CanIt Storage Manager */
    { 6600, "mshvlm" },                         /* Microsoft Hyper-V Live Migration */
    { 6601, "mstmg-sstp" },                     /* Microsoft Threat Management Gateway SSTP */
    { 6602, "wsscomfrmwk" },                    /* Windows WSS Communication Framework */
    { 6624, "datascaler-db" },                  /* DataScaler database */
    { 6625, "datascaler-ctl" },                 /* DataScaler control */
    { 6632, "mxodbc-connect" },                 /* eGenix mxODBC Connect */
    { 6640, "ovsdb" },                          /* Open vSwitch Database protocol */
    { 6655, "pcs-sf-ui-man" },                  /* PC SOFT - Software factory UI/manager */
    { 6656, "emgmsg" },                         /* Emergency Message Control Service */
    { 6665, "ircu" },                           /* IRCU */
    { 6669, "ircu" },                           /* IRCU */
    { 6678, "vfbp" },                           /* Viscount Freedom Bridge Protocol */
    { 6687, "clever-ctrace" },                  /* CleverView for cTrace Message Service */
    { 6688, "clever-tcpip" },                   /* CleverView for TCP/IP Message Service */
    { 6690, "cleverdetect" },                   /* CLEVERDetect Message Service */
    { 6697, "ircs-u" },                         /* Internet Relay Chat via TLS/SSL */
    { 6716, "princity-agent" },                 /* Princity Agent */
    { 6777, "ntz-tracker" },                    /* netTsunami Tracker */
    { 6778, "ntz-p2p-storage" },                /* netTsunami p2p storage system */
    { 6789, "radg" },                           /* GSS-API for the Oracle Remote Administration Daemon */
    { 6817, "pentbox-sim" },                    /* PenTBox Secure IM Protocol */
    { 6868, "acctopus-cc" },                    /* Acctopus Command Channel */
    { 6900, "rtimeviewer" },                    /* R*TIME Viewer Data Interface */
    { 6901, "jetstream" },                      /* Novell Jetstream messaging protocol */
    { 6970, "conductor" },                      /* Conductor test coordination protocol */
    { 7018, "fisa-svc" },                       /* FISA Service */
    { 7019, "doceri-ctl" },                     /* doceri drawing service control */
    { 7026, "loreji-panel" },                   /* Loreji Webhosting Panel */
    { 7031, "iposplanet" },                     /* IPOSPLANET retailing multi devices protocol */
    { 7072, "iba-cfg" },                        /* iba Device Configuration Protocol */
    { 7073, "martalk" },                        /* MarTalk protocol */
    { 7117, "rothaga" },                        /* Encrypted chat and file transfer service */
    { 7123, "snif" },                           /* End-to-end TLS Relay Control Connection */
    { 7167, "casrmagent" },                     /* CA SRM Agent */
    { 7168, "cnckadserver" },                   /* cncKadServer DB & Inventory Services */
    { 7172, "metalbend" },                      /* Port used for MetalBend programmable interface */
    { 7173, "zsecure" },                        /* zSecure Server */
    { 7202, "pon-ictp" },                       /* Inter-Channel Termination Protocol (ICTP) for multi-wavelength PON (Passive Optical Network) systems */
    { 7215, "PS-Server" },                      /* Communication ports for PaperStream Server services */
    { 7216, "PS-Capture-Pro" },                 /* PaperStream Capture Professional */
    { 7228, "citrixupp" },                      /* Citrix Universal Printing Port */
    { 7229, "citrixuppg" },                     /* Citrix UPP Gateway */
    { 7234, "asa-gateways" },                   /* Traffic forwarding for Okta cloud infra */
    { 7236, "display" },                        /* Wi-Fi Alliance Wi-Fi Display Protocol */
    { 7237, "pads" },                           /* PADS (Public Area Display System) Server */
    { 7244, "frc-hicp" },                       /* FrontRow Calypso Human Interface Control Protocol */
    { 7282, "mzca-action" },                    /* eventACTION/ussACTION (MZCA) server */
    { 7283, "genstat" },                        /* General Statistics Rendezvous Protocol */
    { 7471, "sttunnel" },                       /* Stateless Transport Tunneling Protocol */
    { 7474, "neo4j" },                          /* Neo4j Graph Database */
    { 7478, "openit" },                         /* IT Asset Management */
    { 7508, "adcp" },                           /* Automation Device Configuration Protocol */
    { 7509, "acplt" },                          /* ACPLT - process automation service */
    { 7551, "controlone-con" },                 /* ControlONE Console signaling */
    { 7563, "cfw" },                            /* Control Framework */
    { 7569, "dell-eql-asm" },                   /* Dell EqualLogic Host Group Management */
    { 7574, "coherence" },                      /* Oracle Coherence Cluster Service */
    { 7626, "simco" },                          /* SImple Middlebox COnfiguration (SIMCO) Server */
    { 7630, "hawk" },                           /* HA Web Konsole */
    { 7631, "tesla-sys-msg" },                  /* TESLA System Messaging */
    { 7672, "imqstomp" },                       /* iMQ STOMP Server */
    { 7673, "imqstomps" },                      /* iMQ STOMP Server over SSL */
    { 7683, "dmt" },                            /* Cleondris DMT */
    { 7687, "bolt" },                           /* Bolt database connection */
    { 7690, "sovd" },                           /* Service-Oriented Vehicle Diagnostics */
    { 7700, "em7-secom" },                      /* EM7 Secure Communications */
    { 7742, "msss" },                           /* Mugginsoft Script Server Service */
    { 7775, "inetfs" },                         /* A File System using TLS over a wide area network */
    { 7847, "csoauth" },                        /* A product key authentication protocol made by CSO */
    { 7869, "mobileanalyzer" },                 /* MobileAnalyzer& MobileMonitor */
    { 7870, "rbt-smc" },                        /* Riverbed Steelhead Mobile Service */
    { 7871, "mdm" },                            /* Mobile Device Management */
    { 7878, "owms" },                           /* Opswise Message Service */
    { 7981, "sossd-collect" },                  /* Spotlight on SQL Server Desktop Collect */
    { 7982, "sossd-agent" },                    /* Spotlight on SQL Server Desktop Agent */
    { 7997, "pushns" },                         /* PUSH Notification Service */
    { 8004, "p2pevolvenet" },                   /* Opensource Evolv Enterprise Platform P2P Network Node Connection Protocol */
    { 8006, "wpl-analytics" },                  /* World Programming analytics */
    { 8009, "nvme-disc" },                      /* NVMe over Fabrics Discovery Service */
    { 8015, "cfg-cloud" },                      /* Configuration Cloud Service */
    { 8016, "ads-s" },                          /* Beckhoff Automation Device Specification */
    { 8042, "fs-agent" },                       /* FireScope Agent */
    { 8043, "fs-server" },                      /* FireScope Server */
    { 8044, "fs-mgmt" },                        /* FireScope Management Interface */
    { 8051, "rocrail" },                        /* Rocrail Client Service */
    { 8066, "toad-bi-appsrvr" },                /* Toad BI Application Server */
    { 8067, "infi-async" },                     /* Infinidat async replication */
    { 8070, "ucs-isc" },                        /* Oracle Unified Communication Suite's Indexed Search Converter */
    { 8077, "mles" },                           /* Mles is a client-server data distribution protocol targeted to serve as a lightweight and reliable distributed publish/subscribe database service. */
    { 8084, "websnp" },                         /* Snarl Network Protocol over HTTP */
    { 8090, "opsmessaging" },                   /* Vehicle to station messaging */
    { 8091, "jamlink" },                        /* Jam Link Framework */
    { 8101, "ldoms-migr" },                     /* Logical Domains Migration */
    { 8102, "kz-migr" },                        /* Oracle Kernel zones migration server */
    { 8117, "purityrpc" },                      /* Purity replication clustering and remote management */
    { 8140, "puppet" },                         /* The Puppet master service */
    { 8153, "quantastor" },                     /* QuantaStor Management Interface */
    { 8162, "lpar2rrd" },                       /* LPAR2RRD client server communication */
    { 8181, "intermapper" },                    /* Intermapper network management system */
    { 8183, "proremote" },                      /* ProRemote */
    { 8190, "gcp-rphy" },                       /* Generic control plane for RPHY */
    { 8191, "limnerpressure" },                 /* Limner Pressure */
    { 8270, "robot-remote" },                   /* Robot Framework Remote Library Interface */
    { 8282, "libelle" },                        /* Libelle EnterpriseBus */
    { 8293, "hiperscan-id" },                   /* Hiperscan Identification Service */
    { 8313, "hub-open-net" },                   /* Hub Open Network */
    { 8404, "svcloud" },                        /* SuperVault Cloud */
    { 8405, "svbackup" },                       /* SuperVault Backup */
    { 8415, "dlpx-sp" },                        /* Delphix Session Protocol */
    { 8423, "aritts" },                         /* Aristech text-to-speech server */
    { 8432, "pgbackrest" },                     /* PostgreSQL Backup */
    { 8445, "copy" },                           /* Port for copy peer sync feature */
    { 8457, "nexentamv" },                      /* Nexenta Management GUI */
    { 8470, "cisco-avp" },                      /* Cisco Address Validation Protocol */
    { 8471, "pim-port" },                       /* PIM over Reliable Transport */
    { 8501, "cmtp-mgt" },                       /* CYTEL Message Transfer Management */
    { 8502, "ftnmtp" },                         /* FTN Message Transfer Protocol */
    { 8615, "imink" },                          /* Imink Service Control */
    { 8665, "monetra" },                        /* Monetra */
    { 8666, "monetra-admin" },                  /* Monetra Administrative Access */
    { 8675, "msi-cps-rm" },                     /* Motorola Solutions Customer Programming Software for Radio Management */
    { 8688, "openremote-ctrl" },                /* OpenRemote Controller HTTP/REST */
    { 8699, "vnyx" },                           /* VNYX Primary Port */
    { 8710, "semi-grpc" },                      /* gRPC for SEMI Standards implementations */
    { 8711, "nvc" },                            /* Nuance Voice Control */
    { 8750, "dey-keyneg" },                     /* DEY Storage Key Negotiation */
    { 8767, "core-of-source" },                 /* Online mobile multiplayer game */
    { 8768, "sandpolis" },                      /* Sandpolis Server */
    { 8769, "oktaauthenticat" },                /* Okta MultiPlatform Access Mgmt for Cloud Svcs */
    { 8778, "uec" },                            /* Stonebranch Universal Enterprise Controller */
    { 8881, "galaxy4d" },                       /* Galaxy4D Online Game Engine */
    { 8888, "ddi-tcp-1" },                      /* NewsEDGE server TCP (TCP 1) */
    { 8889, "ddi-tcp-2" },                      /* Desktop Data TCP 1 */
    { 8890, "ddi-tcp-3" },                      /* Desktop Data TCP 2 */
    { 8891, "ddi-tcp-4" },                      /* Desktop Data TCP 3: NESS application */
    { 8892, "ddi-tcp-5" },                      /* Desktop Data TCP 4: FARM product */
    { 8893, "ddi-tcp-6" },                      /* Desktop Data TCP 5: NewsEDGE/Web application */
    { 8894, "ddi-tcp-7" },                      /* Desktop Data TCP 6: COAL application */
    { 8908, "dpp" },                            /* WFA Device Provisioning Protocol */
    { 8937, "twds" },                           /* Transaction Warehouse Data Service */
    { 8953, "ub-dns-control" },                 /* unbound dns nameserver control */
    { 8997, "oracle-ms-ens" },                  /* Oracle Messaging Server Event Notification Service */
    { 8998, "canto-roboflow" },                 /* Canto RoboFlow Control */
    { 9005, "golem" },                          /* Golem Inter-System RPC */
    { 9008, "ogs-server" },                     /* Open Grid Services Server */
    { 9010, "sdr" },                            /* Secure Data Replicator Protocol */
    { 9050, "versiera" },                       /* Versiera Agent Listener */
    { 9051, "fio-cmgmt" },                      /* Fusion-io Central Manager Service */
    { 9060, "CardWeb-IO" },                     /* CardWeb request-response I/O exchange */
    { 9083, "emc-pp-mgmtsvc" },                 /* EMC PowerPath Mgmt Service */
    { 9093, "copycat" },                        /* Copycat database replication service */
    { 9106, "astergate" },                      /* Astergate Control Service */
    { 9107, "astergatefax" },                   /* AstergateFax Control Service */
    { 9122, "grcmp" },                          /* Global Relay compliant mobile instant messaging protocol */
    { 9123, "grcp" },                           /* Global Relay compliant instant messaging protocol */
    { 9306, "sphinxql" },                       /* Sphinx search server (MySQL listener) */
    { 9310, "sapms" },                          /* SAP Message Server */
    { 9312, "sphinxapi" },                      /* Sphinx search server */
    { 9339, "gnmi-gnoi" },                      /* gRPC Network Mgmt/Operations Interface */
    { 9340, "gribi" },                          /* gRPC Routing Information Base Interface */
    { 9345, "rancher" },                        /* Rancher Agent */
    { 9387, "d2dconfig" },                      /* D2D Configuration Service */
    { 9388, "d2ddatatrans" },                   /* D2D Data Transfer Service */
    { 9389, "adws" },                           /* Active Directory Web Services */
    { 9390, "otp" },                            /* OpenVAS Transfer Protocol */
    { 9445, "mindarray-ca" },                   /* MindArray Systems Console Agent */
    { 9559, "p4runtime" },                      /* P4Runtime gRPC Service */
    { 9614, "iadt-tls" },                       /* iADT Protocol over TLS */
    { 9616, "erunbook-agent" },                 /* eRunbook Agent */
    { 9617, "erunbook-server" },                /* eRunbook Server */
    { 9630, "peoctlr" },                        /* Peovica Controller */
    { 9631, "peocoll" },                        /* Peovica Collector */
    { 9640, "pqsflows" },                       /* ProQueSys Flows Service */
    { 9666, "zoomcp" },                         /* Zoom Control Panel Game Server Management */
    { 9876, "sd" },                             /* Session Director */
    { 9877, "x510" },                           /* The X.510 wrapper protocol */
    { 9925, "xybrid-cloud" },                   /* XYBRID Cloud */
    { 9954, "hinp" },                           /* HaloteC Instrument Network Protocol */
    { 9955, "alljoyn-stm" },                    /* Contact Port for AllJoyn standard messaging */
    { 9978, "xybrid-rt" },                      /* XYBRID RT Server */
    { 9979, "visweather" },                     /* Valley Information Systems Weather station data */
    { 9981, "pumpkindb" },                      /* Event sourcing database engine with a built-in programming language */
    { 9988, "nsesrvr" },                        /* Software Essentials Secure HTTP server */
    { 10004, "emcrmirccd" },                    /* EMC Replication Manager Client */
    { 10005, "emcrmird" },                      /* EMC Replication Manager Server */
    { 10006, "netapp-sync" },                   /* Sync replication protocol among different NetApp platforms */
    { 10010, "rxapi" },                         /* ooRexx rxapi services */
    { 10020, "abb-hw" },                        /* Hardware configuration and maintenance */
    { 10055, "qptlmd" },                        /* Quantapoint FLEXlm Licensing Service */
    { 10125, "cimple" },                        /* HotLink CIMple REST API */
    { 10129, "bmc-gms" },                       /* BMC General Manager Server */
    { 10161, "snmptls" },                       /* SNMP-TLS */
    { 10162, "snmptls-trap" },                  /* SNMP-Trap-TLS */
    { 10201, "rsms" },                          /* Remote Server Management Service */
    { 10261, "tile-ml" },                       /* Tile remote machine learning */
    { 10321, "cosir" },                         /* Computer Op System Information Report */
    { 10443, "cirrossp" },                      /* CirrosSP Workstation Communication */
    { 10548, "serverdocs" },                    /* Apple Document Sharing Service */
    { 10631, "printopia" },                     /* Printopia Serve */
    { 10809, "nbd" },                           /* Linux Network Block Device */
    { 10933, "octopustentacle" },               /* Listen port used by the Octopus Deploy Tentacle deployment agent */
    { 11103, "origo-sync" },                    /* OrigoDB Server Sync Interface */
    { 11104, "netapp-icmgmt" },                 /* NetApp Intercluster Management */
    { 11105, "netapp-icdata" },                 /* NetApp Intercluster Data */
    { 11109, "sgi-dmfmgr" },                    /* Data migration facility Manager (DMF) is a browser based interface to DMF */
    { 11110, "sgi-soap" },                      /* Data migration facility (DMF) SOAP is a web server protocol to support remote access to DMF */
    { 11172, "oemcacao-jmxmp" },                /* OEM cacao JMX-remoting access point */
    { 11173, "t5-straton" },                    /* Straton Runtime Programing */
    { 11174, "oemcacao-rmi" },                  /* OEM cacao rmi registry access point */
    { 11175, "oemcacao-websvc" },               /* OEM cacao web service access point */
    { 11202, "dcsl-backup" },                   /* DCSL Network Backup Services */
    { 11235, "xcompute" },                      /* numerical systems messaging */
    { 11489, "asgcypresstcps" },                /* ASG Cypress Secure Only */
    { 11623, "emc-xsw-dconfig" },               /* EMC XtremSW distributed config */
    { 11796, "lanschool" },                     /* LanSchool */
    { 11971, "tibsd" },                         /* TiBS Service */
    { 12010, "edbsrvr" },                       /* ElevateDB Server */
    { 12302, "rads" },                          /* Remote Administration Daemon (RAD) is a system service that offers secure, remote, programmatic access to Solaris system configuration and run-time state */
    { 12546, "carb-repl-ctrl" },                /* Carbonite Server Replication Control */
    { 12865, "netperf" },                       /* control port for the netperf benchmark */
    { 13218, "emc-vcas-tcp" },                  /* EMC Virtual CAS Service */
    { 13400, "doip-data" },                     /* DoIP Data */
    { 13823, "bmdss" },                         /* Blackmagic Design Streaming Server */
    { 13832, "a-trust-rpc" },                   /* Certificate Management and Issuing */
    { 13930, "medevolve" },                     /* MedEvolve Port Requester */
    { 14143, "icpps" },                         /* IceWall Cert Protocol over TLS */
    { 14150, "vcscmd" },                        /* Veritas Cluster Server Command Server */
    { 14500, "xpra" },                          /* xpra network protocol */
    { 15002, "onep-tls" },                      /* Open Network Environment TLS */
    { 15999, "programmar" },                    /* ProGrammar Enterprise */
    { 16000, "fmsas" },                         /* Administration Server Access */
    { 16001, "fmsascon" },                      /* Administration Server Connector */
    { 16002, "gsms" },                          /* GoodSync Mediation Service */
    { 16020, "jwpc" },                          /* Filemaker Java Web Publishing Core */
    { 16021, "jwpc-bin" },                      /* Filemaker Java Web Publishing Core Binary */
    { 16162, "solaris-audit" },                 /* Solaris Audit - secure remote audit log */
    { 16385, "rdgs" },                          /* Reliable Datagram Sockets */
    { 16619, "xoms" },                          /* X509 Objects Management Service */
    { 16665, "axon-tunnel" },                   /* Reliable multipath data transport for high latencies */
    { 16789, "cadsisvr" },                      /* This server provides callable services to mainframe External Security Managers from any TCP/IP platform */
    { 17010, "ncpu" },                          /* Plan 9 cpu port */
    { 17184, "vestasdlp" },                     /* Vestas Data Layer Protocol */
    { 17223, "isa100-gci" },                    /* ISA100 GCI is a service utilizing a common interface between an ISA100 Wireless gateway and a client application */
    { 17500, "db-lsp" },                        /* Dropbox LanSync Protocol */
    { 17555, "ailith" },                        /* Ailith management of routers */
    { 17777, "sw-orion" },                      /* SolarWinds Orion */
    { 18104, "radpdf" },                        /* RAD PDF Service */
    { 18136, "racf" },                          /* z/OS Resource Access Control Facility */
    { 18242, "iclid" },                         /* Checkpoint router monitoring */
    { 18243, "clusterxl" },                     /* Checkpoint router state backup */
    { 18668, "vdmmesh" },                       /* Manufacturing Execution Systems Mesh Communication */
    { 19020, "j-link" },                        /* J-Link TCP/IP Protocol */
    { 19220, "cora" },                          /* Client Connection Management and Data Exchange Service */
    { 19790, "faircom-db" },                    /* FairCom Database */
    { 19998, "iec-104-sec" },                   /* IEC 60870-5-104 process control - secure */
    { 20013, "ss-idi" },                        /* Samsung Interdevice Interaction */
    { 20057, "avesterra" },                     /* AvesTerra Hypergraph Transfer Protocol (HGTP) */
    { 20810, "crtech-nlm" },                    /* CRTech NLM */
    { 21010, "notezilla-lan" },                 /* Notezilla.Lan Server */
    { 21212, "trinket-agent" },                 /* Distributed artificial intelligence */
    { 21213, "cohesity-agent" },                /* Cohesity backup agents */
    { 21221, "aigairserver" },                  /* Services for Air Server */
    { 21553, "rdm-tfs" },                       /* Raima RDM TFS */
    { 21801, "sal" },                           /* Safe AutoLogon */
    { 22125, "dcap" },                          /* dCache Access Protocol */
    { 22128, "gsidcap" },                       /* GSI dCache Access Protocol */
    { 22222, "easyengine" },                    /* EasyEngine is CLI tool to manage WordPress Sites on Nginx server */
    { 22335, "shrewd-control" },                /* Initium Labs Security and Automation Control */
    { 22351, "codemeter-cmwan" },               /* TPC/IP requests of copy protection software to a server */
    { 22537, "caldsoft-backup" },               /* CaldSoft Backup server file transfer */
    { 22555, "vocaltec-wconf" },                /* Vocaltec Web Conference */
    { 23053, "gntp" },                          /* Generic Notification Transport Protocol */
    { 23294, "5afe-dir" },                      /* 5AFE SDN Directory */
    { 23456, "aequus" },                        /* Aequus Service */
    { 23457, "aequus-alt" },                    /* Aequus Service Mgmt */
    { 23546, "areaguard-neo" },                 /* AreaGuard Neo - WebServer */
    { 24323, "vrmg-ip" },                       /* Verimag mobile class protocol over TCP */
    { 24577, "bilobit" },                       /* bilobit Service */
    { 24666, "sdtvwcam" },                      /* Service used by SmarDTV to communicate between a CAM and a second screen application */
    { 24754, "cslg" },                          /* Citrix StorageLink Gateway */
    { 25576, "sauterdongle" },                  /* Sauter Dongle */
    { 25604, "idtp" },                          /* Identifier Tracing Protocol */
    { 26257, "cockroach" },                     /* CockroachDB */
    { 26486, "exoline-tcp" },                   /* EXOline-TCP */
    { 27010, "flex-lmadmin" },                  /* A protocol for managing license services */
    { 27017, "mongodb" },                       /* Mongo database system */
    { 27876, "astrolink" },                     /* Astrolink Protocol */
    { 28001, "pqsp" },                          /* PQ Service */
    { 28010, "gruber-cashreg" },                /* Gruber cash registry protocol */
    { 28080, "thor-engine" },                   /* thor/server - ML engine */
    { 28589, "bosswave" },                      /* Building operating system services wide area verified exchange */
    { 29000, "saltd-licensing" },               /* Siemens Licensing Server */
    { 29999, "bingbang" },                      /* data exchange protocol for IEC61850 in wind power plants */
    { 30000, "ndmps" },                         /* Secure Network Data Management Protocol */
    { 30100, "rwp" },                           /* Remote Window Protocol */
    { 30400, "gs-realtime" },                   /* GroundStar RealTime System */
    { 31016, "ka-sddp" },                       /* Kollective Agent Secure Distributed Delivery Protocol */
    { 31020, "autotrac-acp" },                  /* Autotrac ACP 245 */
    { 31400, "pace-licensed" },                 /* PACE license server */
    { 31685, "dsx-monitor" },                   /* DS Expert Monitor */
    { 32400, "plex" },                          /* Plex multimedia */
    { 32811, "retp" },                          /* Real Estate Transport Protocol */
    { 33000, "wg-endpt-comms" },                /* WatchGuard Endpoint Communications */
    { 33060, "mysqlx" },                        /* MySQL Database Extended Interface */
    { 33333, "dgi-serv" },                      /* Digital Gaslight Service */
    { 33334, "speedtrace" },                    /* SpeedTrace TraceAgent */
    { 33890, "digilent-adept" },                /* Adept IP protocol */
    { 34567, "dhanalakshmi" },                  /* dhanalakshmi.org EDI Service */
    { 35000, "heathview" },                     /* HeathView */
    { 35002, "rt-sound" },                      /* ReadyTech Sound Server */
    { 35003, "rt-devicemapper" },               /* ReadyTech DeviceMapper Server */
    { 35005, "rt-labtracker" },                 /* ReadyTech LabTracker */
    { 35006, "rt-helper" },                     /* ReadyTech Helper Service */
    { 35354, "kitim" },                         /* KIT Messenger */
    { 35355, "altova-lm" },                     /* Altova License Management */
    { 35356, "guttersnex" },                    /* Gutters Note Exchange */
    { 35357, "openstack-id" },                  /* OpenStack ID Service */
    { 36524, "febooti-aw" },                    /* Febooti Automation Workshop */
    { 36602, "observium-agent" },               /* Observium statistics collection agent */
    { 36700, "mapx" },                          /* MapX communication */
    { 37483, "gdrive-sync" },                   /* Google Drive Sync */
    { 37601, "eftp" },                          /* Epipole File Transfer Protocol */
    { 38000, "ivs-database" },                  /* InfoVista Server Database */
    { 38001, "ivs-insertion" },                 /* InfoVista Server Insertion */
    { 38002, "cresco-control" },                /* Cresco Controller */
    { 38638, "psqlmws" },                       /* Premier SQL Middleware Server */
    { 38800, "sruth" },                         /* Sruth is a service for the distribution of routinely- generated but arbitrary files based on a publish/subscribe distribution model and implemented using a peer-to-peer transport mechanism */
    { 38865, "secrmmsafecopya" },               /* Security approval process for use of the secRMM SafeCopy program */
    { 39063, "vroa" },                          /* Children's hearing test/Telemedicine */
    { 40404, "sptx" },                          /* Simplify Printing TX */
    { 41121, "tentacle" },                      /* Tentacle Server */
    { 41796, "crestron-cips" },                 /* Crestron Secure Control Port */
    { 41797, "crestron-ctps" },                 /* Crestron Secure Terminal Port */
    { 42999, "curiosity" },                     /* API endpoint for search application */
    { 43000, "recvr-rc" },                      /* Receiver Remote Control */
    { 43191, "noit-transport" },                /* Reconnoiter Agent Data Transport */
    { 43210, "shaperai" },                      /* Shaper Automation Server Management */
    { 43439, "eq3-update" },                    /* EQ3 firmware update */
    { 43440, "ew-mgmt" },                       /* Cisco EnergyWise Management */
    { 44123, "z-wave-tunnel" },                 /* Z-Wave Secure Tunnel */
    { 44323, "pmwebapi" },                      /* HTTP binding for Performance Co-Pilot client API */
    { 44444, "cognex-dataman" },                /* Cognex DataMan Management Protocol */
    { 44445, "acronis-backup" },                /* Acronis Backup Gateway service port */
    { 44900, "m3da" },                          /* M3DA is used for efficient machine-to-machine communications */
    { 45000, "asmp" },                          /* Nuance AutoStore Status Monitoring Protocol (data transfer) */
    { 45001, "asmps" },                         /* Nuance AutoStore Status Monitoring Protocol (secure data transfer) */
    { 45002, "rs-status" },                     /* Redspeed Status Monitor */
    { 45045, "synctest" },                      /* Remote application control protocol */
    { 45514, "cloudcheck" },                    /* ASSIA CloudCheck WiFi Management System */
    { 45824, "dai-shell" },                     /* Server for the DAI family of client-server products */
    { 46336, "inedo" },                         /* Listen port used for Inedo agent communication */
    { 46998, "spremotetablet" },                /* Connection between a desktop computer or server and a signature tablet to capture handwritten signatures */
    { 47001, "winrm" },                         /* Windows Remote Management Service */
    { 48004, "nimbusdb" },                      /* NimbusDB Connector */
    { 48005, "nimbusdbctrl" },                  /* NimbusDB Control */
    { 48048, "juka" },                          /* Juliar Programming Language Protocol */
    { 48049, "3gpp-cbsp" },                     /* 3GPP Cell Broadcast Service Protocol */
    { 48050, "weandsf" },                       /* WeFi Access Network Discovery and Selection Function */
    { 49000, "matahari" },                      /* Matahari Broker */
    { 49001, "nusrp" },                         /* Nuance Unity Service Request Protocol */
    { 49150, "inspider" },                      /* InSpider System */
};

static ws_services_entry_t global_udp_services_table[] = {
    { 113, "auth" },                            /* Authentication Service */
    { 270, "gist" },                            /* Q-mode encapsulation for GIST messages */
    { 456, "macon-udp" },
    { 465, "igmpv3lite" },                      /* IGMP over UDP for SSM */
    { 474, "tn-tl-w2" },
    { 512, "comsat" },
    { 513, "who" },                             /* maintains data bases showing who's logged in to machines on a local net and the load average of the machine */
    { 514, "syslog" },
    { 520, "router" },                          /* local routing process (on site); uses variant of Xerox NS routing information protocol - RIP */
    { 623, "asf-rmcp" },                        /* ASF Remote Management and Control Protocol */
    { 664, "asf-secure-rmcp" },                 /* ASF Secure Remote Management and Control Protocol */
    { 716, "pana" },                            /* PANA Messages */
    { 750, "loadav" },
    { 773, "notify" },
    { 774, "acmaint-dbd" },
    { 775, "acmaint-transd" },
    { 861, "owamp-test" },                      /* OWAMP-Test */
    { 862, "twamp-test" },                      /* TWAMP-Test Receiver Port */
    { 914, "rift-lies" },                       /* Routing in Fat Trees Link Information Elements (TEMPORARY - registered 2023-02-17, expires 2024-02-17) */
    { 915, "rift-ties" },                       /* Routing in Fat Trees Topology Information Elements (TEMPORARY - registered 2023-02-17, expires 2024-02-17) */
    { 998, "puparp" },
    { 999, "applix" },                          /* Applix ac */
    { 1027, "6a44" },                           /* IPv6 Behind NAT44 CPEs */
    { 1110, "nfsd-keepalive" },                 /* Client status info */
    { 1182, "accelenet-data" },                 /* AcceleNet Data */
    { 1549, "shivasound" },                     /* Shiva Sound */
    { 1580, "tn-tl-r2" },
    { 1596, "radio-bc" },
    { 1676, "netcomm2" },
    { 2001, "wizard" },                         /* curry */
    { 2004, "emce" },                           /* CCWS mm conf */
    { 2005, "oracle" },
    { 2006, "raid-cd" },                        /* raid */
    { 2007, "raid-am" },
    { 2008, "terminaldb" },
    { 2009, "whosockami" },
    { 2010, "pipe-server" },
    { 2011, "servserv" },
    { 2012, "raid-ac" },
    { 2013, "raid-cd" },
    { 2014, "raid-sf" },
    { 2015, "raid-cs" },
    { 2017, "bootclient" },
    { 2018, "rellpack" },
    { 2019, "about" },
    { 2021, "xinuexpansion1" },
    { 2022, "xinuexpansion2" },
    { 2025, "xribs" },
    { 2187, "ssmd" },                           /* Sepehr System Management Data */
    { 2378, "dali" },                           /* DALI lighting control */
    { 2384, "sd-capacity" },                    /* SD-CAPACITY */
    { 2802, "veritas-udp1" },                   /* Veritas UDP1 */
    { 3010, "ping-pong" },                      /* Telerate Workstation */
    { 3104, "autocuetime" },                    /* Autocue Time Service */
    { 3386, "gprs-sig" },                       /* GPRS SIG */
    { 3487, "ltcudp" },                         /* LISA UDP Transfer Channel */
    { 3519, "galileo" },                        /* Netvion Galileo Port */
    { 3574, "dmaf-caster" },                    /* DMAF Caster */
    { 3863, "asap-udp" },                       /* asap udp port */
    { 4077, "ascomalarm" },                     /* Ascom IP Alarming */
    { 4084, "fortisphere-vm" },                 /* Fortisphere VM Service */
    { 4086, "ftsync" },                         /* Firewall/NAT state table synchronization */
    { 4169, "iadt-disc" },                      /* Internet ADT Discovery Protocol */
    { 4173, "mma-discovery" },                  /* MMA Device Discovery */
    { 4174, "sm-disc" },                        /* StorMagic Discovery */
    { 4191, "dsmipv6" },                        /* Dual Stack MIPv6 NAT Traversal */
    { 4192, "azeti-bd" },                       /* azeti blinddate */
    { 4325, "geognosisman" },                   /* Cadcorp GeognoSIS Administrator */
    { 4341, "lisp-data" },                      /* LISP Data Packets */
    { 4342, "lisp-control" },                   /* LISP Control Packets */
    { 4361, "nacnl" },                          /* NavCom Discovery and Control Port */
    { 4362, "afore-vdp-disc" },                 /* AFORE vNode Discovery protocol */
    { 4366, "shadowstream" },                   /* ShadowStream System */
    { 4371, "l2c-disc" },                       /* LAN2CAN Discovery */
    { 4394, "apwi-disc" },                      /* American Printware Discovery */
    { 4412, "smallchat" },                      /* SmallChat */
    { 4413, "avi-nms-disc" },                   /* AVI Systems NMS */
    { 4416, "pjj-player-disc" },                /* PJJ Media Player discovery */
    { 4418, "axysbridge" },                     /* AXYS communication protocol */
    { 4441, "netblox" },                        /* Netblox Protocol */
    { 4534, "armagetronad" },                   /* Armagetron Advanced Game Server */
    { 4557, "mtcevrunqss" },                    /* Marathon everRun Quorum Service Server */
    { 4558, "mtcevrunqman" },                   /* Marathon everRun Quorum Service Manager */
    { 4592, "hrpd-ith-at-an" },                 /* HRPD-ITH (AT-AN) */
    { 4621, "ventoso" },                        /* Bidirectional single port remote radio VOIP and Control stream */
    { 4726, "a26-fap-fgw" },                    /* A26 (FAP-FGW) */
    { 4727, "fcis-disc" },                      /* F-Link Client Information Service Discovery */
    { 4729, "gsmtap" },                         /* GSM Interface Tap */
    { 4732, "ohmtrigger" },                     /* OHM server trigger */
    { 4742, "sicct-sdp" },                      /* SICCT Service Discovery Protocol */
    { 4746, "intelliadm-disc" },                /* IntelliAdmin Discovery */
    { 4747, "buschtrommel" },                   /* peer-to-peer file exchange protocol */
    { 4753, "simon-disc" },                     /* Simple Invocation of Methods Over Network (SIMON) Discovery */
    { 4754, "gre-in-udp" },                     /* GRE-in-UDP Encapsulation */
    { 4755, "gre-udp-dtls" },                   /* GRE-in-UDP Encapsulation with DTLS */
    { 4785, "cncp" },                           /* Cisco Nexus Control Protocol */
    { 4789, "vxlan" },                          /* Virtual eXtensible Local Area Network (VXLAN) */
    { 4790, "vxlan-gpe" },                      /* Generic Protocol Extension for Virtual eXtensible Local Area Network (VXLAN) */
    { 4791, "roce" },                           /* IP Routable RocE */
    { 4803, "notateit-disc" },                  /* Notateit Messaging Discovery */
    { 4804, "aja-ntv4-disc" },                  /* AJA ntv4 Video System Discovery */
    { 4840, "opcua-udp" },                      /* OPC UA Multicast Datagram Protocol */
    { 4878, "inst-discovery" },                 /* Agilent Instrument Discovery */
    { 4881, "socp-t" },                         /* SOCP Time Synchronization Protocol */
    { 4882, "socp-c" },                         /* SOCP Control Protocol */
    { 4936, "an-signaling" },                   /* Signal protocol port for autonomic networking */
    { 4937, "atsc-mh-ssc" },                    /* ATSC-M/H Service Signaling Channel */
    { 4980, "ctxs-vpp" },                       /* Citrix Virtual Path */
    { 5014, "onpsocket" },                      /* Overlay Network Protocol */
    { 5031, "dmp" },                            /* Direct Message Protocol */
    { 5046, "vpm-udp" },                        /* Vishay PM UDP Service */
    { 5047, "iscape" },                         /* iSCAPE Data Broadcasting */
    { 5053, "rlm-disc" },                       /* RLM Discovery Server */
    { 5058, "locus-disc" },                     /* Locus Discovery */
    { 5078, "pixelpusher" },                    /* PixelPusher pixel data */
    { 5079, "cp-spxrpts" },                     /* Cambridge Pixel SPx Reports */
    { 5092, "magpie" },                         /* Magpie Binary */
    { 5101, "talarian-udp" },                   /* Talarian_UDP */
    { 5104, "tinymessage" },                    /* TinyMessage */
    { 5105, "hughes-ap" },                      /* Hughes Association Protocol */
    { 5116, "emb-proj-cmd" },                   /* EPSON Projecter Image Transfer */
    { 5136, "minotaur-sa" },                    /* Minotaur SA */
    { 5164, "vpa-disc" },                       /* Virtual Protocol Adapter Discovery */
    { 5245, "downtools-disc" },                 /* DownTools Discovery Protocol */
    { 5246, "capwap-control" },                 /* CAPWAP Control Protocol */
    { 5247, "capwap-data" },                    /* CAPWAP Data Protocol */
    { 5271, "cuelink-disc" },                   /* StageSoft CueLink discovery */
    { 5350, "pcp-multicast" },                  /* Port Control Protocol Multicast */
    { 5351, "pcp" },                            /* Port Control Protocol */
    { 5364, "kdnet" },                          /* Microsoft Kernel Debugger */
    { 5436, "pmip6-cntl" },
    { 5437, "pmip6-data" },
    { 5450, "tiepie-disc" },                    /* TiePie engineering data acquisition (discovery) */
    { 5474, "apsolab-rpc" },                    /* The Apsolab company's status query protocol */
    { 5569, "rdmnet-device" },                  /* PLASA E1.33, Remote Device Management (RDM) messages */
    { 5670, "zre-disc" },                       /* Local area discovery and messaging over ZeroMQ */
    { 5682, "brightcore" },                     /* BrightCore control & data transfer exchange */
    { 5687, "gog-multiplayer" },                /* GOG multiplayer game protocol */
    { 5728, "io-dist-group" },                  /* Dist. I/O Comm. Service Group Membership */
    { 5784, "ibar" },                           /* Cisco Interbox Application Redundancy */
    { 5786, "cisco-redu" },                     /* redundancy notification */
    { 5787, "waascluster" },                    /* Cisco WAAS Cluster Protocol */
    { 5794, "spdp" },                           /* Simple Peered Discovery Protocol */
    { 6080, "gue" },                            /* Generic UDP Encapsulation */
    { 6081, "geneve" },                         /* Generic Network Virtualization Encapsulation (Geneve) */
    { 6082, "p25cai" },                         /* APCO Project 25 Common Air Interface - UDP encapsulation */
    { 6083, "miami-bcast" },                    /* telecomsoftware miami broadcast */
    { 6088, "doglms-notify" },                  /* SuperDog License Manager Notifier */
    { 6118, "tipc" },                           /* Transparent Inter Process Communication */
    { 6160, "ecmp-data" },                      /* Emerson Extensible Control and Management Protocol Data */
    { 6201, "thermo-calc" },                    /* Management of service nodes in a processing grid for thermodynamic calculations */
    { 6241, "jeol-nsddp-1" },                   /* JEOL Network Services Dynamic Discovery Protocol 1 */
    { 6242, "jeol-nsddp-2" },                   /* JEOL Network Services Dynamic Discovery Protocol 2 */
    { 6243, "jeol-nsddp-3" },                   /* JEOL Network Services Dynamic Discovery Protocol 3 */
    { 6244, "jeol-nsddp-4" },                   /* JEOL Network Services Dynamic Discovery Protocol 4 */
    { 6315, "scup-disc" },                      /* Sensor Control Unit Protocol Discovery Protocol */
    { 6317, "nav-data" },                       /* Navtech Radar Sensor Data */
    { 6324, "hrd-ns-disc" },                    /* HR Device Network service */
    { 6363, "ndn" },                            /* Named Data Networking */
    { 6419, "svdrp-disc" },                     /* Simple VDR Protocol Discovery */
    { 6511, "dccp-udp" },                       /* Datagram Congestion Control Protocol Encapsulation for NAT Traversal */
    { 6568, "rp-reputation" },                  /* Roaring Penguin IP Address Reputation Collection */
    { 6633, "cisco-vpath-tun" },                /* Cisco vPath Services Overlay */
    { 6634, "mpls-pm" },                        /* MPLS Performance Measurement out-of-band response */
    { 6635, "mpls-udp" },                       /* Encapsulate MPLS packets in UDP tunnels. */
    { 6636, "mpls-udp-dtls" },                  /* Encapsulate MPLS packets in UDP tunnels with DTLS. */
    { 6657, "palcom-disc" },                    /* PalCom Discovery */
    { 6678, "vfbp-disc" },                      /* Viscount Freedom Bridge Discovery */
    { 6696, "babel" },                          /* Babel Routing Protocol */
    { 6699, "babel-dtls" },                     /* Babel Routing Protocol over DTLS */
    { 6784, "bfd-lag" },                        /* Bidirectional Forwarding Detection (BFD) on Link Aggregation Group (LAG) Interfaces */
    { 6868, "acctopus-st" },                    /* Acctopus Status */
    { 6980, "qolyester" },                      /* QoS-extended OLSR protocol */
    { 7019, "doceri-view" },                    /* doceri drawing service screen view */
    { 7040, "quest-disc" },                     /* Quest application level network service discovery */
    { 7072, "iba-cfg-disc" },                   /* iba Device Configuration Protocol */
    { 7088, "zixi-transport" },                 /* Zixi live video transport protocol */
    { 7095, "jdp-disc" },                       /* Java Discovery Protocol */
    { 7107, "aes-x170" },                       /* AES-X170 */
    { 7181, "janus-disc" },                     /* Janus Guidewire Enterprise Discovery Service Bus */
    { 7235, "aspcoordination" },                /* ASP Coordination Protocol */
    { 7244, "frc-hicp-disc" },                  /* FrontRow Calypso Human Interface Control Protocol */
    { 7282, "mzca-alert" },                     /* eventACTION/ussACTION (MZCA) alert */
    { 7420, "ipluminary" },                     /* Multichannel real-time lighting control */
    { 7550, "cloudsignaling" },                 /* Cloud Signaling Service */
    { 7574, "coherence-disc" },                 /* Oracle Coherence Cluster discovery service */
    { 7784, "s-bfd" },                          /* Seamless Bidirectional Forwarding Detection (S-BFD) */
    { 7802, "vns-tp" },                         /* Virtualized Network Services Tunnel Protocol */
    { 7872, "mipv6tls" },                       /* TLS-based Mobile IPv6 Security */
    { 7982, "sossd-disc" },                     /* Spotlight on SQL Server Desktop Agent Discovery */
    { 7998, "usicontentpush" },                 /* USI Content Push Service */
    { 8006, "wpl-disc" },                       /* World Programming analytics discovery */
    { 8017, "cisco-cloudsec" },                 /* Cisco Cloudsec Dataplane Port Number */
    { 8060, "aero" },                           /* Asymmetric Extended Route Optimization (AERO) */
    { 8111, "skynetflow" },                     /* Skynetflow network services */
    { 8149, "eor-game" },                       /* Edge of Reality game data */
    { 8202, "aesop" },                          /* Audio+Ethernet Standard Open Protocol */
    { 8211, "aruba-papi" },                     /* Aruba Networks AP management */
    { 8231, "hncp-udp-port" },                  /* HNCP */
    { 8232, "hncp-dtls-port" },                 /* HNCP over DTLS */
    { 8266, "espeasy-p2p" },                    /* ESPeasy peer-2-peer communication */
    { 8282, "libelle-disc" },                   /* Libelle EnterpriseBus discovery */
    { 8384, "marathontp" },                     /* Marathon Transport Protocol */
    { 8433, "aws-as2" },                        /* Non Persistent Desktop and Application Streaming */
    { 8445, "copy-disc" },                      /* Port for copy discovery */
    { 8501, "cmtp-av" },                        /* CYTEL Message Transfer Audio and Video */
    { 8503, "lsp-self-ping" },                  /* MPLS LSP Self-Ping */
    { 8609, "canon-cpp-disc" },                 /* Canon Compact Printer Protocol Discovery */
    { 8675, "msi-cps-rm-disc" },                /* Motorola Solutions Customer Programming Software for Radio Management Discovery */
    { 8732, "dtp-net" },                        /* DASGIP Net Services */
    { 8805, "pfcp" },                           /* Destination Port number for PFCP */
    { 8807, "hes-clip" },                       /* HES-CLIP Interoperability protocol */
    { 8808, "ssports-bcast" },                  /* STATSports Broadcast Service */
    { 8809, "3gpp-monp" },                      /* MCPTT Off-Network Protocol (MONP) */
    { 8888, "ddi-udp-1" },                      /* NewsEDGE server UDP (UDP 1) */
    { 8889, "ddi-udp-2" },                      /* NewsEDGE server broadcast */
    { 8890, "ddi-udp-3" },                      /* NewsEDGE client broadcast */
    { 8891, "ddi-udp-4" },                      /* Desktop Data UDP 3: NESS application */
    { 8892, "ddi-udp-5" },                      /* Desktop Data UDP 4: FARM product */
    { 8893, "ddi-udp-6" },                      /* Desktop Data UDP 5: NewsEDGE/Web application */
    { 8894, "ddi-udp-7" },                      /* Desktop Data UDP 6: COAL application */
    { 8981, "nod-client" },                     /* Network of Devices Client */
    { 9007, "ogs-client" },                     /* Open Grid Services Client */
    { 9011, "d-star" },                         /* D-Star Routing digital voice+data for amateur radio */
    { 9060, "CardWeb-RT" },                     /* CardWeb realtime device data */
    { 9081, "cisco-aqos" },                     /* Required for Adaptive Quality of Service */
    { 9106, "astergate-disc" },                 /* Astergate Discovery Service */
    { 9277, "traingpsdata" },                   /* GPS Data transmitted from train to ground network */
    { 9286, "n2receive" },                      /* n2 monitoring receiver */
    { 9522, "sma-spw" },                        /* SMA Speedwire */
    { 9632, "mc-comm" },                        /* Mobile-C Communications */
    { 9878, "kca-service" },                    /* The KX509 Kerberized Certificate Issuance Protocol in Use in 2012 */
    { 9899, "sctp-tunneling" },                 /* SCTP TUNNELING */
    { 9901, "enrp" },                           /* enrp server channel */
    { 9903, "multicast-ping" },                 /* Multicast Ping Protocol */
    { 9955, "alljoyn-mcm" },                    /* Contact Port for AllJoyn multiplexed constrained messaging */
    { 9956, "alljoyn" },                        /* Alljoyn Name Service */
    { 10023, "cefd-vmp" },                      /* Comtech EF-Data's Vipersat Management Protocol */
    { 10111, "nmea-onenet" },                   /* NMEA OneNet multicast messaging */
    { 10161, "snmpdtls" },                      /* SNMP-DTLS */
    { 10162, "snmpdtls-trap" },                 /* SNMP-Trap-DTLS */
    { 10201, "rscs" },                          /* Remote Server Control and Test Service */
    { 10253, "eapol-relay" },                   /* Relay of EAPOL frames */
    { 10439, "bngsync" },                       /* BalanceNG session table synchronization protocol */
    { 10500, "hip-nat-t" },                     /* HIP NAT-Traversal */
    { 10810, "nmc-disc" },                      /* Nuance Mobile Care Discovery */
    { 11108, "myq-termlink" },                  /* Hardware Terminals Discovery and Low-Level Communication Protocol */
    { 11171, "snss" },                          /* Surgical Notes Security Service Discovery (SNSS) */
    { 11430, "lsdp" },                          /* Lenbrook Service Discovery Protocol */
    { 11796, "lanschool-mpt" },                 /* Lanschool Multipoint */
    { 11877, "x2e-disc" },                      /* X2E service discovery protocol */
    { 12009, "ghvpn" },                         /* Green Hills VPN */
    { 13218, "emc-vcas-udp" },                  /* EMV Virtual CAS Service Discovery */
    { 13400, "doip-disc" },                     /* DoIP Discovery */
    { 14002, "scotty-disc" },                   /* Discovery of a SCOTTY hardware codec board */
    { 15118, "v2g-secc" },                      /* v2g Supply Equipment Communication Controller Discovery Protocol */
    { 15998, "2ping" },                         /* 2ping Bi-Directional Ping Service */
    { 16003, "alfin" },                         /* Automation and Control by REGULACE.ORG */
    { 16666, "vtp" },                           /* Vidder Tunnel Protocol */
    { 17222, "cpsp" },                          /* Control Plane Synchronization Protocol (SPSP) */
    { 17224, "trdp-pd" },                       /* Train Realtime Data Protocol (TRDP) Process Data */
    { 17500, "db-lsp-disc" },                   /* Dropbox LanSync Discovery */
    { 18516, "heythings" },                     /* HeyThings Device communicate service */
    { 18668, "vdmmesh-disc" },                  /* Manufacturing Execution Systems Mesh Communication */
    { 19220, "cora-disc" },                     /* Discovery for Client Connection Management and Data Exchange Service */
    { 19788, "mle" },                           /* Mesh Link Establishment */
    { 20012, "ss-idi-disc" },                   /* Samsung Interdevice Interaction discovery */
    { 22335, "shrewd-stream" },                 /* Initium Labs Security and Automation Streaming */
    { 22555, "vocaltec-phone" },                /* Vocaltec Internet Phone */
    { 23272, "s102" },                          /* S102 application */
    { 23294, "5afe-disc" },                     /* 5AFE SDN Directory discovery */
    { 24322, "hid" },                           /* Transport of Human Interface Device data streams */
    { 24577, "bilobit-update" },                /* bilobit Service Update */
    { 24850, "assoc-disc" },                    /* Device Association Discovery */
    { 25954, "bf-game" },                       /* Bitfighter game server */
    { 25955, "bf-master" },                     /* Bitfighter master server */
    { 26486, "exoline-udp" },                   /* EXOline-UDP */
    { 28119, "a27-ran-ran" },                   /* A27 cdma2000 RAN Management */
    { 30004, "amicon-fpsu-s" },                 /* Amicon FPSU-IP VPN */
    { 30832, "samsung-disc" },                  /* Samsung Convergence Discovery Protocol */
    { 31016, "ka-kdp" },                        /* Kollective Agent Kollective Delivery Protocol */
    { 31029, "yawn" },                          /* YaWN - Yet Another Windows Notifier */
    { 33334, "speedtrace-disc" },               /* SpeedTrace TraceAgent Discovery */
    { 33435, "mtrace" },                        /* IP Multicast Traceroute */
    { 34567, "edi_service" },                   /* dhanalakshmi.org EDI Service */
    { 35355, "altova-lm-disc" },                /* Altova License Management Discovery */
    { 36411, "wlcp" },                          /* Wireless LAN Control plane Protocol (WLCP) */
    { 38002, "crescoctrl-disc" },               /* Cresco Controller Discovery */
    { 40023, "k-patentssensor" },               /* K-PatentsSensorInformation */
    { 40853, "ortec-disc" },                    /* ORTEC Service Discovery */
    { 43000, "recvr-rc-disc" },                 /* Receiver Remote Control Discovery */
    { 43210, "shaperai-disc" },                 /* Shaper Automation Server Management Discovery */
    { 43438, "hmip-routing" },                  /* HmIP LAN Routing */
    { 43439, "eq3-config" },                    /* EQ3 discovery and configuration */
    { 43440, "ew-disc-cmd" },                   /* Cisco EnergyWise Discovery and Command Flooding */
    { 44544, "domiq" },                         /* DOMIQ Building Automation */
    { 44600, "asihpi" },                        /* AudioScience HPI */
    { 44900, "m3da-disc" },                     /* M3DA Discovery is used for efficient machine-to-machine communications */
    { 45000, "asmp-mon" },                      /* Nuance AutoStore Status Monitoring Protocol (device monitoring) */
    { 45514, "cloudcheck-ping" },               /* ASSIA CloudCheck WiFi Management keepalive */
    { 47100, "jvl-mactalk" },                   /* Configuration of motors connected to Industrial Ethernet */
    { 47809, "presonus-ucnet" },                /* PreSonus Universal Control Network Protocol */
    { 49001, "nusdp-disc" },                    /* Nuance Unity Service Discovery Protocol */
};

static ws_services_entry_t global_sctp_services_table[] = {
    { 9, "discard" },                           /* Discard */
    { 20, "ftp-data" },                         /* File Transfer [Default Data] */
    { 21, "ftp" },                              /* File Transfer Protocol [Control] */
    { 22, "ssh" },                              /* The Secure Shell (SSH) Protocol */
    { 80, "http" },                             /* World Wide Web HTTP */
    { 179, "bgp" },                             /* Border Gateway Protocol */
    { 443, "https" },                           /* http protocol over TLS/SSL */
    { 1021, "exp1" },                           /* RFC3692-style Experiment 1 */
    { 1022, "exp2" },                           /* RFC3692-style Experiment 2 */
    { 1167, "cisco-ipsla" },                    /* Cisco IP SLAs Control Protocol */
    { 1528, "norp" },                           /* Not Only a Routeing Protocol */
    { 1720, "h323hostcall" },                   /* H.323 Call Control Signalling */
    { 2049, "nfs" },                            /* Network File System - Sun Microsystems */
    { 2225, "rcip-itu" },                       /* Resource Connection Initiation Protocol */
    { 2904, "m2ua" },                           /* M2UA */
    { 2905, "m3ua" },                           /* M3UA */
    { 2944, "megaco-h248" },                    /* Megaco H-248 */
    { 2945, "h248-binary" },                    /* H248 Binary */
    { 3097, "itu-bicc-stc" },                   /* ITU-T Q.1902.1/Q.2150.3 */
    { 3565, "m2pa" },                           /* M2PA */
    { 3863, "asap-sctp" },
    { 3864, "asap-sctp-tls" },                  /* asap-sctp/tls */
    { 3868, "diameter" },                       /* DIAMETER */
    { 4195, "aws-wsp" },                        /* AWS protocol for cloud remoting solution */
    { 4333, "ahsp" },                           /* ArrowHead Service Protocol (AHSP) */
    { 4502, "a25-fap-fgw" },                    /* A25 (FAP-FGW) */
    { 4711, "trinity-dist" },                   /* Trinity Trust Network Node Communication */
    { 4739, "ipfix" },                          /* IP Flow Info Export */
    { 4740, "ipfixs" },                         /* ipfix protocol over TLS */
    { 5060, "sip" },                            /* SIP */
    { 5061, "sips" },                           /* SIP-TLS */
    { 5090, "car" },                            /* Candidate AR */
    { 5091, "cxtp" },                           /* Context Transfer Protocol */
    { 5215, "noteza" },                         /* NOTEZA Data Safety Service */
    { 5445, "smbdirect" },                      /* Server Message Block over Remote Direct Memory Access */
    { 5672, "amqp" },                           /* AMQP */
    { 5675, "v5ua" },                           /* V5UA application port */
    { 5868, "diameters" },                      /* Diameter over TLS/TCP */
    { 5903, "ff-ice" },                         /* Flight & Flow Info for Collaborative Env */
    { 5904, "ag-swim" },                        /* Air-Ground SWIM */
    { 5905, "asmgcs" },                         /* Adv Surface Mvmnt and Guidance Cont Sys */
    { 5906, "rpas-c2" },                        /* Remotely Piloted Vehicle C&C */
    { 5907, "dsd" },                            /* Distress and Safety Data App */
    { 5908, "ipsma" },                          /* IPS Management Application */
    { 5909, "agma" },                           /* Air-ground media advisory */
    { 5910, "cm" },                             /* Context Management */
    { 5911, "cpdlc" },                          /* Controller Pilot Data Link Communication */
    { 5912, "fis" },                            /* Flight Information Services */
    { 5913, "ads-c" },                          /* Automatic Dependent Surveillance */
    { 6704, "frc-hp" },                         /* ForCES HP (High Priority) channel */
    { 6705, "frc-mp" },                         /* ForCES MP (Medium Priority) channel */
    { 6706, "frc-lp" },                         /* ForCES LP (Low priority) channel */
    { 6970, "conductor-mpx" },                  /* conductor for multiplex */
    { 7626, "simco" },                          /* SImple Middlebox COnfiguration (SIMCO) Server */
    { 7701, "nfapi" },                          /* SCF nFAPI defining MAC/PHY split */
    { 7728, "osvr" },                           /* Open-Source Virtual Reality */
    { 8471, "pim-port" },                       /* PIM over Reliable Transport */
    { 9082, "lcs-ap" },                         /* LCS Application Protocol */
    { 9084, "aurora" },                         /* IBM AURORA Performance Visualizer */
    { 9900, "iua" },                            /* IUA */
    { 9901, "enrp-sctp" },                      /* enrp server channel */
    { 9902, "enrp-sctp-tls" },                  /* enrp/tls server channel */
    { 11235, "xcompute" },                      /* numerical systems messaging */
    { 11997, "wmereceiving" },                  /* WorldMailExpress */
    { 11998, "wmedistribution" },               /* WorldMailExpress */
    { 11999, "wmereporting" },                  /* WorldMailExpress */
    { 14001, "sua" },                           /* SUA */
    { 19999, "dnp-sec" },                       /* Distributed Network Protocol - Secure */
    { 20000, "dnp" },                           /* DNP */
    { 20049, "nfsrdma" },                       /* Network File System (NFS) over RDMA */
    { 25471, "rna" },                           /* RNSAP User Adaptation for Iurh */
    { 29118, "sgsap" },                         /* SGsAP in 3GPP */
    { 29168, "sbcap" },                         /* SBcAP in 3GPP */
    { 29169, "iuhsctpassoc" },                  /* HNBAP and RUA Common Association */
    { 30100, "rwp" },                           /* Remote Window Protocol */
    { 36412, "s1-control" },                    /* S1-Control Plane (3GPP) */
    { 36422, "x2-control" },                    /* X2-Control Plane (3GPP) */
    { 36423, "slmap" },                         /* SLm Interface Application Protocol */
    { 36424, "nq-ap" },                         /* Nq and Nq' Application Protocol */
    { 36443, "m2ap" },                          /* M2 Application Part */
    { 36444, "m3ap" },                          /* M3 Application Part */
    { 36462, "xw-control" },                    /* Xw-Control Plane (3GPP) */
    { 37472, "3gpp-w1ap" },                     /* W1 signalling transport */
    { 38412, "ng-control" },                    /* NG Control Plane (3GPP) */
    { 38422, "xn-control" },                    /* Xn Control Plane (3GPP) */
    { 38462, "e1-interface" },                  /* E1 signalling transport (3GPP) */
    { 38472, "f1-control" },                    /* F1 Control Plane (3GPP) */
};

static ws_services_entry_t global_dccp_services_table[] = {
    { 9, "discard" },                           /* Discard */
    { 1021, "exp1" },                           /* RFC3692-style Experiment 1 */
    { 1022, "exp2" },                           /* RFC3692-style Experiment 2 */
    { 1113, "ltp-deepspace" },                  /* Licklider Transmission Protocol */
    { 4195, "aws-wsp" },                        /* AWS protocol for cloud remoting solution */
    { 4556, "dtn-bundle" },                     /* DTN Bundle TCP CL Protocol */
    { 5004, "avt-profile-1" },                  /* RTP media data */
    { 5005, "avt-profile-2" },                  /* RTP control protocol */
    { 6514, "syslog-tls" },                     /* Syslog over TLS */
};
