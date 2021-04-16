#if !defined __APP_HTTPS_SERVER_H__
#define __APP_HTTPS_SERVER_H__

static httpd_handle_t mc_https_server_start(httpd_uri_t *root);
static void mc_https_server_stop(httpd_handle_t server);

#endif // __APP_HTTPS_SERVER_H__

