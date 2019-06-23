import http.server as SimpleHTTPServer
import socketserver

PORT = 8000

Handler = SimpleHTTPServer.SimpleHTTPRequestHandler

httpd = socketserver.TCPServer(("", PORT), Handler)

print("Running http server :",  PORT)
httpd.serve_forever()
