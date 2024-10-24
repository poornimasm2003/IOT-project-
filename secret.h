#ifndef SECRET_H
#define SECRET_H

#define SECRET

#define THINGNAME "YourThingName"                      // Change this to your Thing name

const char WIFI_SSID[] = "Wokwi-GUEST";              // Use guest WiFi SSID
const char WIFI_PASSWORD[] = "";                      // Leave password empty for open guest network
const char AWS_IOT_ENDPOINT[] = "ae2iduvb7as2s-ats.iot.eu-north-1.amazonaws.com";   // Change this to your AWS IoT endpoint

// Amazon Root CA 1
static const char AWS_CERT_CA[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy
rqXRfboQnoZsG4q5WTP468SQvvG5
-----END CERTIFICATE-----
)EOF";

// Device Certificate
static const char AWS_CERT_CRT[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----
MIIDWjCCAkKgAwIBAgIVAMbmrTLxDT+D9AtuL5LkO96XOWQcMA0GCSqGSIb3DQEB
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yNDEwMjMxMDIz
MzlaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh
dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDOl4U18/+ViG51Q9Rq
WLH9UA3cHd5Ree8ytLFen2s2kTOYc1ZsVR9mif8Oj0CyyCqmlNLdqEmsSu9a641C
Ot4hXiCjFX+z5Ynw6RTiFLusZ/D1lSuw1tVayUVwvG8VzEdn0ZBnQNV1gQTA9t9G
rF6Yx+Lmb+yMU+4Lt5IY6zP7s6QNx6pZeXurf1gB68qjDNpxAdo8BlhgUQqmu0vk
OJ9iKzTXAkt8USh+LmQR/llC7PZvbjAfgBi+OmwO4iyK/g6/dT5MKBTw2A/a8ZhM
HcoPf2Tk99fDT7pCXMDR2FOlzSiktqlShrAUkRowOLaYaq0X8Sc/GjE88clTczce
elbJAgMBAAGjYDBeMB8GA1UdIwQYMBaAFJTofKQBUFI29QQLGy4/IaYIx9y0MB0G
A1UdDgQWBBRNCUbT8zvG7AAvQ8MIrVjFdXgW6TAMBgNVHRMBAf8EAjAAMA4GA1Ud
DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAq9FAupMyN/39LW4gT9fuuqMT
yxfJ6qzByswOqbNtPuGUzLEd06PCt0M4OnrBL62f2LCZguCtFbhE7IB6/Rrn4VUb
y003g246yqrdrcRtBindMQ2ZvYTU9k8YRdcGIbfnfBXPipPh+WXBScIkFWqqXgyv
Bnbb/gS3f9JIM8m+ouo0oXwLAQ7GBUP6WMXvDE9uAYyjfxHwKsdWgGRvszEflMSK
nyUVlYpyuOVeMr1vgsMJDZm0i+PQHsDK99Y3/sewKm5EVmYVlYoEAo4wiKz6gT3W
75YQbXvxaTKiluMK86GmTh0m4KybtaCIn1vy/X7LGFh40cFLZT0KGP6O52CNFA==
-----END CERTIFICATE-----

)KEY";

// Device Private Key
static const char AWS_CERT_PRIVATE[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
MIIEpAIBAAKCAQEAzpeFNfP/lYhudUPUalix/VAN3B3eUXnvMrSxXp9rNpEzmHNW
bFUfZon/Do9AssgqppTS3ahJrErvWuuNQjreIV4goxV/s+WJ8OkU4hS7rGfw9ZUr
sNbVWslFcLxvFcxHZ9GQZ0DVdYEEwPbfRqxemMfi5m/sjFPuC7eSGOsz+7OkDceq
WXl7q39YAevKowzacQHaPAZYYFEKprtL5DifYis01wJLfFEofi5kEf5ZQuz2b24w
H4AYvjpsDuIsiv4Ov3U+TCgU8NgP2vGYTB3KD39k5PfXw0+6QlzA0dhTpc0opLap
UoawFJEaMDi2mGqtF/EnPxoxPPHJU3M3HnpWyQIDAQABAoIBADXD+UcxWTLxbs3V
+VI0Ax6J1xGSNGm/8iCgJgkaNCzfXS4v1i4beTCWeWqwnYXp0i/IS5ikU4gjeGeR
JhI2f9jvRk8rKTEIa/3mqyirfKxB4NQJHnXHc39NImVUpRRnNa4vPAWjOep6yWHu
3ezmrzfTzZlrR4S90xX5kGwryjuW7TihlZXvwC+eAhmdCrJKaK8Ao3H1rGEE6Hls
V3J3n1JOHDzLf3G7UrwTREpulxToNC5WuJuEBEh+EpQ2aBnJXYLSWFiVkTSiuYMs
m/O0SymXRxIW2ZCwoNSfgY2cGXDhl/T6+6kk59oolb1TBPwwgckEEqy7gQ5/43AC
xCJjWoECgYEA7TF2SMsnnmfNxv26JWixtG5r2yhMoDd8Ts16WIBkVUCj6Uz4LMGz
9lWxKANgKRRUytKgmTI7512g+qHO44Wlw6i9Gduk5F11XPxgIMgjtrOUto5jQiyx
kaDW6cqMoVoQAgHpPhzFVysWWjsJJ/ab1T0x+EWcgEC0W1qsaG5pUCMCgYEA3vjp
5zTnYswgP/it+n3C+AALZJ8dpZFG5xnIJGYBK7kaDHTKS+sz8XJdh3+vdM/8aqx9
RnFmTBYeFHQlHJcYEE8oH/Pn5+WyskzyBTMK5zQD4wfXpsQX5Fl5BPDBvpa9f6IJ
r9S540ClvPy9NgdPHR1rrQqRqDCUGD1dzLBvNiMCgYBrbBhG9YMW8ao3chgI8zZw
IgZE9iZl9VseEV9Uj6lhFuplMc+/7WZErSCTn5vAXw3b4bKMTzzkFvpeKEQbtR6S
02v5Nwmhx1Xs6/vZPOs3xnMWjrwTb0xoSPCsZ2hzdueDETyCPeN+C+yOpugJql1/
ILzt1REA4M0OBq3IiiC2AwKBgQCjYBdjBeyVA6SNuxUfeY6mUMIIVF5QtoYRR17S
7Lrm4pYnklu4DPrea0IEypYxLURylTilqOmfzoTzz7ZxoHRNXvKzlu/RhwjMhHzB
Ook+p2pBq7ljxEMNWlHGQPJ1R9ZJ8tzOLTyXOwM12qp5MBnT537CKABaEF4y9KQK
Gy0hqQKBgQCuyc8F7rhkTDo97sJE8PaKgqr/7SSI66l7IZYouIE8Gs7/SZ39fvx8
MKj2miPZ6iOLPXcjHnVO4a3tRc8ud4H2kXO8iug4AbU0CRzG1heL+jJSBhoQuxNX
q34M/Plb0YPn7P5nqLIp2yJaH7pK4nQozGXqUS1LoKKsd3yBTyFeFw==
-----END RSA PRIVATE KEY-----

)KEY";

#endif // SECRET_H