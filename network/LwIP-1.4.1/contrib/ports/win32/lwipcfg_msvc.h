/**
 * Additional settings for the win32 port.
 * Copy this to lwipcfg_msvc.h and make the config changes you need.
 */

/* configuration for this port */
#define PPP_USERNAME  "Admin"
#define PPP_PASSWORD  "pass"

/** Define this to the index of the windows network adapter to use */
//#define PACKET_LIB_ADAPTER_NR         1
/** Define this to the GUID of the windows network adapter to use
 * or NOT define this if you want PACKET_LIB_ADAPTER_NR to be used */ 
#define PACKET_LIB_ADAPTER_GUID       "7CD22147-9A41-4D12-969D-32C7801BFCB8"
/*#define PACKET_LIB_GET_ADAPTER_NETADDRESS(addr) IP4_ADDR((addr), 192,168,1,0)*/
/*#define PACKET_LIB_QUIET*/

/* If these 2 are not defined, the corresponding config setting is used */
/* #define USE_DHCP    0 */
/* #define USE_AUTOIP  0 */

/* #define USE_PCAPIF 1 */
#define LWIP_PORT_INIT_IPADDR(addr)   IP4_ADDR((addr), 10,235,59,25)
#define LWIP_PORT_INIT_GW(addr)       IP4_ADDR((addr), 10,235,58,1)
#define LWIP_PORT_INIT_NETMASK(addr)  IP4_ADDR((addr), 255,255,254,0)

/* remember to change this MAC address to suit your needs!
   the last octet will be increased by netif->num for each netif */
#define LWIP_MAC_ADDR_BASE            {0x34,0x17,0xEB,0xA4,0xA3,0xC3}

/* #define USE_SLIPIF 0 */
/* #define SIO_USE_COMPORT 0 */
#ifdef USE_SLIPIF
#if USE_SLIPIF
#define LWIP_PORT_INIT_SLIP1_IPADDR(addr)   IP4_ADDR((addr), 192, 168,   2, 2)
#define LWIP_PORT_INIT_SLIP1_GW(addr)       IP4_ADDR((addr), 192, 168,   2, 1)
#define LWIP_PORT_INIT_SLIP1_NETMASK(addr)  IP4_ADDR((addr), 255, 255, 255, 0)
#if USE_SLIPIF > 1
#define LWIP_PORT_INIT_SLIP2_IPADDR(addr)   IP4_ADDR((addr), 192, 168,   2, 1)
#define LWIP_PORT_INIT_SLIP2_GW(addr)       IP4_ADDR((addr), 0,     0,   0, 0)
#define LWIP_PORT_INIT_SLIP2_NETMASK(addr)  IP4_ADDR((addr), 255, 255, 255, 0)*/
#endif /* USE_SLIPIF > 1 */
#endif /* USE_SLIPIF */
#endif /* USE_SLIPIF */

/* configuration for applications */

#define LWIP_CHARGEN_APP              0
#define LWIP_DNS_APP                  0
#define LWIP_HTTPD_APP                1
/* Set this to 1 to use the netconn http server,
 * otherwise the raw api server will be used. */
/*#define LWIP_HTTPD_APP_NETCONN     */
#define LWIP_NETBIOS_APP              0
#define LWIP_NETIO_APP                0
#define LWIP_PING_APP                 1
#define LWIP_RTP_APP                  0
#define LWIP_SHELL_APP                0
#define LWIP_SNTP_APP                 0
#define LWIP_SOCKET_EXAMPLES_APP      0
#define LWIP_TCPECHO_APP              0
/* Set this to 1 to use the netconn tcpecho server,
 * otherwise the raw api server will be used. */
/*#define LWIP_TCPECHO_APP_NETCONN   */
#define LWIP_UDPECHO_APP              0
#define LWIP_LWIPERF_APP              0

/*#define USE_DHCP    1*/
/*#define USE_AUTOIP  1*/
#if LWIP_DNS_APP
#define DNS_SERVER_ADDRESS(ipaddr) IP4_ADDR(ipaddr, 192, 168, 0, 1);
#endif
/* define this to your custom application-init function */
/* #define LWIP_APP_INIT my_app_init() */
