// CustomNetworkManager.cpp
#include "CustomNetworkManager.h"
// Include other necessary headers

#include <iostream>
#include <ostream>
#include <cstring>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/bio.h>
#include <fstream>
#include <ctime>

CustomNetworkManager::CustomNetworkManager(QObject* parent) : QObject(parent) {}

int customErrorCallback(const char* str, size_t len, void* logStream)
{
    std::ostream* logFile = reinterpret_cast<std::ostream*>(logStream);
    (*logFile) << "OpenSSL Error: " << std::string(str, len) << std::endl;
    return 0;
}

void logOpenSSLErrors(std::ostream& logFile)
{
    ERR_print_errors_cb(customErrorCallback, &logFile);
}

void CustomNetworkManager::sendPostRequest720p()
{
    // Define the BwInfo structure
    struct BwInfo {
        std::string appInsId;
        int requestType;
        std::string fixedAllocation;
        std::string allocationDirection;
    };

    const BwInfo bwInfo = {
        "1234567890",
        0,          // Request type 0
        "10mbs",  // Fixed allocation
        "00"        // Allocation direction
    };

    const char* hostname = "127.0.0.1:3001";
    std::string apiPath = "/bwm/v1/bw_allocations";
    // Generate a filename based on the current datetime
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    struct tm* parts = std::localtime(&now_c);

    char filename[100];
    std::strftime(filename, sizeof(filename), "%Y-%m-%d_%H-%M-%S PostRequest720p.log", parts);

    // Create and open a log file
    std::ofstream logFile(filename);

    if (!logFile.is_open())
    {
        std::cerr << "Failed to open log file." << std::endl;
    }

    SSL_library_init();
    SSL_load_error_strings();
    OpenSSL_add_all_algorithms();

    SSL_CTX* ctx = SSL_CTX_new(SSLv23_client_method());
    if (!ctx)
    {
        logFile << "SSL_CTX_new() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }
    SSL_CTX_set_options(ctx, SSL_OP_NO_SSLv2 | SSL_OP_NO_SSLv3);
    SSL* ssl = SSL_new(ctx);
    if (!ssl)
    {
        logFile << "SSL_new() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    BIO* bio = BIO_new_ssl_connect(ctx);
    if (!bio)
    {
        logFile << "BIO_new_ssl_connect() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    BIO_set_conn_hostname(bio, hostname);
    if (BIO_do_connect(bio) <= 0)
    {
        logFile << "BIO_do_connect() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    // Construct the JSON payload manually
    std::string jsonPayload = "{";
    jsonPayload += "\"appInsId\":\"" + bwInfo.appInsId + "\",";
    jsonPayload += "\"requestType\":" + std::to_string(bwInfo.requestType) + ",";
    jsonPayload += "\"fixedAllocation\":\"" + bwInfo.fixedAllocation + "\",";
    jsonPayload += "\"allocationDirection\":\"" + bwInfo.allocationDirection + "\"";
    jsonPayload += "}";

    std::string request = "POST " + apiPath + " HTTP/1.1\r\n";
    request += "Host: " + std::string(hostname) + "\r\n";
    request += "Content-Type: application/json\r\n";
    request += "Content-Length: " + std::to_string(jsonPayload.length()) + "\r\n";
    request += "\r\n";
    request += jsonPayload;

    int bytesWritten = static_cast<int>(BIO_write(bio, request.c_str(), request.length()));
    if (bytesWritten <= 0)
    {
        logFile << "BIO_write() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    char buffer[1024];
    int bytesRead;
    while ((bytesRead = BIO_read(bio, buffer, sizeof(buffer))) > 0)
    {
        logFile.write(buffer, bytesRead);
    }

    BIO_free_all(bio);
    SSL_CTX_free(ctx);
    ERR_free_strings();

    logFile.close();
}



void CustomNetworkManager::sendPostRequest1080p()
{
    // Define the BwInfo structure
    struct BwInfo {
        std::string appInsId;
        int requestType;
        std::string fixedAllocation;
        std::string allocationDirection;
    };

    const BwInfo bwInfo = {
        "1234567890",
        0,          // Request type 0
        "20mbs",  // Fixed allocation
        "00"        // Allocation direction
    };

    const char* hostname = "127.0.0.1:3001";
    std::string apiPath = "/bwm/v1/bw_allocations";
    // Generate a filename based on the current datetime
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    struct tm* parts = std::localtime(&now_c);

    char filename[100];
    std::strftime(filename, sizeof(filename), "%Y-%m-%d_%H-%M-%S PostRequest1080p.log", parts);

    // Create and open a log file
    std::ofstream logFile(filename);

    if (!logFile.is_open())
    {
        std::cerr << "Failed to open log file." << std::endl;
    }

    SSL_library_init();
    SSL_load_error_strings();
    OpenSSL_add_all_algorithms();

    SSL_CTX* ctx = SSL_CTX_new(SSLv23_client_method());
    if (!ctx)
    {
        logFile << "SSL_CTX_new() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }
    SSL_CTX_set_options(ctx, SSL_OP_NO_SSLv2 | SSL_OP_NO_SSLv3);
    SSL* ssl = SSL_new(ctx);
    if (!ssl)
    {
        logFile << "SSL_new() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    BIO* bio = BIO_new_ssl_connect(ctx);
    if (!bio)
    {
        logFile << "BIO_new_ssl_connect() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    BIO_set_conn_hostname(bio, hostname);
    if (BIO_do_connect(bio) <= 0)
    {
        logFile << "BIO_do_connect() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    // Construct the JSON payload manually
    std::string jsonPayload = "{";
    jsonPayload += "\"appInsId\":\"" + bwInfo.appInsId + "\",";
    jsonPayload += "\"requestType\":" + std::to_string(bwInfo.requestType) + ",";
    jsonPayload += "\"fixedAllocation\":\"" + bwInfo.fixedAllocation + "\",";
    jsonPayload += "\"allocationDirection\":\"" + bwInfo.allocationDirection + "\"";
    jsonPayload += "}";

    std::string request = "POST " + apiPath + " HTTP/1.1\r\n";
    request += "Host: " + std::string(hostname) + "\r\n";
    request += "Content-Type: application/json\r\n";
    request += "Content-Length: " + std::to_string(jsonPayload.length()) + "\r\n";
    request += "\r\n";
    request += jsonPayload;

    int bytesWritten = static_cast<int>(BIO_write(bio, request.c_str(), request.length()));
    if (bytesWritten <= 0)
    {
        logFile << "BIO_write() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    char buffer[1024];
    int bytesRead;
    while ((bytesRead = BIO_read(bio, buffer, sizeof(buffer))) > 0)
    {
        logFile.write(buffer, bytesRead);
    }

    BIO_free_all(bio);
    SSL_CTX_free(ctx);
    ERR_free_strings();

    logFile.close();
}



void CustomNetworkManager::sendPostRequest1440p()
{
    // Define the BwInfo structure
    struct BwInfo {
        std::string appInsId;
        int requestType;
        std::string fixedAllocation;
        std::string allocationDirection;
    };

    const BwInfo bwInfo = {
        "1234567890",
        0,          // Request type 0
        "30mbs",  // Fixed allocation
        "00"        // Allocation direction
    };

    const char* hostname = "127.0.0.1:3001";
    std::string apiPath = "/bwm/v1/bw_allocations";
    // Generate a filename based on the current datetime
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    struct tm* parts = std::localtime(&now_c);

    char filename[100];
    std::strftime(filename, sizeof(filename), "%Y-%m-%d_%H-%M-%S PostRequest1440p.log", parts);

    // Create and open a log file
    std::ofstream logFile(filename);

    if (!logFile.is_open())
    {
        std::cerr << "Failed to open log file." << std::endl;
    }

    SSL_library_init();
    SSL_load_error_strings();
    OpenSSL_add_all_algorithms();

    SSL_CTX* ctx = SSL_CTX_new(SSLv23_client_method());
    if (!ctx)
    {
        logFile << "SSL_CTX_new() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }
    SSL_CTX_set_options(ctx, SSL_OP_NO_SSLv2 | SSL_OP_NO_SSLv3);
    SSL* ssl = SSL_new(ctx);
    if (!ssl)
    {
        logFile << "SSL_new() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    BIO* bio = BIO_new_ssl_connect(ctx);
    if (!bio)
    {
        logFile << "BIO_new_ssl_connect() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    BIO_set_conn_hostname(bio, hostname);
    if (BIO_do_connect(bio) <= 0)
    {
        logFile << "BIO_do_connect() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    // Construct the JSON payload manually
    std::string jsonPayload = "{";
    jsonPayload += "\"appInsId\":\"" + bwInfo.appInsId + "\",";
    jsonPayload += "\"requestType\":" + std::to_string(bwInfo.requestType) + ",";
    jsonPayload += "\"fixedAllocation\":\"" + bwInfo.fixedAllocation + "\",";
    jsonPayload += "\"allocationDirection\":\"" + bwInfo.allocationDirection + "\"";
    jsonPayload += "}";

    std::string request = "POST " + apiPath + " HTTP/1.1\r\n";
    request += "Host: " + std::string(hostname) + "\r\n";
    request += "Content-Type: application/json\r\n";
    request += "Content-Length: " + std::to_string(jsonPayload.length()) + "\r\n";
    request += "\r\n";
    request += jsonPayload;

    int bytesWritten = static_cast<int>(BIO_write(bio, request.c_str(), request.length()));
    if (bytesWritten <= 0)
    {
        logFile << "BIO_write() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    char buffer[1024];
    int bytesRead;
    while ((bytesRead = BIO_read(bio, buffer, sizeof(buffer))) > 0)
    {
        logFile.write(buffer, bytesRead);
    }

    BIO_free_all(bio);
    SSL_CTX_free(ctx);
    ERR_free_strings();

    logFile.close();
}



void CustomNetworkManager::sendPatchRequest(const QString& id, const QString& BW)
{
    // Define the BwInfo structure
    struct BwInfo {
        std::string appInsId;
        int requestType;
        std::string fixedAllocation;
        std::string allocationDirection;
    };

    const BwInfo bwInfo = {
        "1234567890",
        0,          // Request type 0
        BW.toStdString(),  // Fixed allocation
        "00"        // Allocation direction
    };
    const char* hostname1 = "127.0.0.1:3001";
    std::string apiPath1 = "/bwm/v1/bw_allocations/";
    //const char* allocationId = "12345";
    //apiPath1 += allocationId;
    apiPath1 += id.toStdString();
    // Generate a filename based on the current datetime
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    struct tm* parts = std::localtime(&now_c);

    char filename[100];
    std::strftime(filename, sizeof(filename), "%Y-%m-%d_%H-%M-%S PatchRequest.log", parts);

    // Create and open a log file
    std::ofstream logFile(filename);

    if (!logFile.is_open())
    {
        std::cerr << "Failed to open log file." << std::endl;
    }

    SSL_library_init();
    SSL_load_error_strings();
    OpenSSL_add_all_algorithms();

    SSL_CTX* ctx = SSL_CTX_new(SSLv23_client_method());
    if (!ctx)
    {
        logFile << "SSL_CTX_new() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }
    SSL_CTX_set_options(ctx, SSL_OP_NO_SSLv2 | SSL_OP_NO_SSLv3);
    SSL* ssl = SSL_new(ctx);
    if (!ssl)
    {
        logFile << "SSL_new() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    BIO* bio = BIO_new_ssl_connect(ctx);
    if (!bio)
    {
        logFile << "BIO_new_ssl_connect() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    BIO_set_conn_hostname(bio, hostname1);
    if (BIO_do_connect(bio) <= 0)
    {
        logFile << "BIO_do_connect() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    // Construct the JSON payload manually for PATCH
    std::string jsonPayload = "{";
    jsonPayload += "\"appInsId\":\"" + bwInfo.appInsId + "\",";
    jsonPayload += "\"requestType\":" + std::to_string(bwInfo.requestType) + ",";
    jsonPayload += "\"fixedAllocation\":\"" + bwInfo.fixedAllocation + "\","; // Use 200Mbps for PATCH
    jsonPayload += "\"allocationDirection\":\"" + bwInfo.allocationDirection + "\"";
    jsonPayload += "}";

    std::string request = "PATCH " + apiPath1 + " HTTP/1.1\r\n";
    request += "Host: " + std::string(hostname1) + "\r\n";
    request += "Content-Type: application/json\r\n";
    request += "Content-Length: " + std::to_string(jsonPayload.length()) + "\r\n";
    request += "\r\n";
    request += jsonPayload;

    int bytesWritten = static_cast<int>(BIO_write(bio, request.c_str(), request.length()));
    if (bytesWritten <= 0)
    {
        logFile << "BIO_write() failed." << std::endl;
        logOpenSSLErrors(logFile);
    }

    char buffer[1024];
    int bytesRead;
    while ((bytesRead = BIO_read(bio, buffer, sizeof(buffer))) > 0)
    {
        logFile.write(buffer, bytesRead);
    }

    BIO_free_all(bio);
    SSL_CTX_free(ctx);
    ERR_free_strings();

    logFile.close();
}
