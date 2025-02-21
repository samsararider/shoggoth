/**** const.h ****
 *
 *  Copyright (c) 2023 Shoggoth Systems
 *
 * Part of the Shoggoth project, under the MIT License.
 * See LICENCE file for license information.
 * SPDX-License-Identifier: MIT
 *
 ****/

#ifndef SHOG_CONST_H
#define SHOG_CONST_H

#define SHOG_HELP                                                              \
  "\
USAGE:\n\
  shog [COMMAND] [<args>] [OPTIONS]...\n\
\n\
OPTIONS:\n\
  -h --help                Show this screen.\n\
  -v --version             Show installed version.\n\
  --debug                  Run in debug mode\n\
  -c <file>                Specifies a file to use for configuration\n\
  -r <directory>           Specifies a runtime directory\n\
\n\
COMMANDS:\n\
  node                     Shoggoth Node\n\
  client                   Shoggoth Client\n\
\n\
CLIENT COMMANDS:\n\
  id                       Display your Shoggoth ID\n\
  clone <ShoggothID>       Download a Shoggoth profile\n\
  init                     Create a new Shoggoth profile\n\
  publish                  Publish a Shoggoth profile\n\
\n\
NODE COMMANDS:\n\
  id                       Display your Node ID\n\
  run                      Run a Shoggoth Node\n\
  start                    Start a Shoggoth Node as a service\n\
  stop                     Stop the Shoggoth Node service\n\
  restart                  Restart the Shoggoth Node service\n\
  status                   Check the status of the Shoggoth Node service\n\
  logs                     Print the logs of the Shoggoth Node service\n\
\n\
EXAMPLES:\n\
  shog node start\n\
  shog client clone SHOGed21b1a13c07a5cba894bb9326d72133\n\
  shog client init\n\
  shog client publish\n\
\n"

#define SHOG_VERSION                                                           \
  "\
Part of the Shoggoth Project - https://shoggoth.systems\n\
Copyright (c) 2023 Shoggoth Systems\n\
Shoggoth comes with absolutely NO WARRANTY of any kind\n\
You may redistribute copies of Shoggoth under the MIT License.\n\
\n"

#define NODE_KEYS_WARNING                                                      \
  "To join the Shoggoth network, you need a pair of cryptographic keys \n"     \
  "This includes a 'PUBLIC KEY' which is used to identify you on the "         \
  "network, and a 'PRIVATE KEY' which is used to sign activities by "          \
  "your node\n"                                                                \
  "Your public key is shared on the network but YOUR PRIVATE KEY MUST "        \
  "BE KEPT SECRET\n"                                                           \
  "DO NOT SHARE YOUR PRIVATE KEY ON THE INTERNET OR STORE IT IN A "            \
  "PUBLIC PLACE\n"                                                             \
  "\n"                                                                         \
  "press ENTER to generate a new key pair\n"

#define CLIENT_KEYS_WARNING                                                    \
  "To join the Shoggoth network, you need a pair of cryptographic keys \n"     \
  "This includes a 'PUBLIC KEY' which is used to identify you on the "         \
  "network, and a 'PRIVATE KEY' which is used to sign activities by "          \
  "your client\n"                                                              \
  "Your public key is shared on the network but YOUR PRIVATE KEY MUST "        \
  "BE KEPT SECRET\n"                                                           \
  "DO NOT SHARE YOUR PRIVATE KEY ON THE INTERNET OR STORE IT IN A "            \
  "PUBLIC PLACE\n"                                                             \
  "\n"                                                                         \
  "press ENTER to generate a new key pair\n"

#endif
