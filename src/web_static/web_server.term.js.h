static const char CONTENT_TERM_JS[] PROGMEM = 
  "\"use strict\";var socket=!1;!function(){var t,n=!1,o=\"debug\";\"\"!==window.location.search&&(t=window.location.search.substr(1),[\"debug\",\"emontx\"].includes(t)&&(o=t));var e=new URL(o,window.location),i=\"ws://\"+e.hostname;function c(t,n){var o=1<arguments.length&&void 0!==n&&n,e=$(\"#term\"),i=$(document).height()-($(document).scrollTop()+window.innerHeight)<10;t=t.replace(/(\\r\\n|\\n\\r|\\n|\\r)/gm,\"\\n\"),o?e.text(t):e.append(t),i&&$(document).scrollTop($(document).height())}function r(){(socket=new WebSocket(i)).onclose=function(){s()},socket.onmessage=function(t){c(t.data)},socket.onerror=function(t){console.log(t),socket.close(),s()}}function s(){!1===n&&(n=setTimeout(function(){n=!1,r()},500))}\"https:\"===e.protocol&&(i=\"wss://\"+e.hostname),e.port&&80!==e.port&&(i+=\":\"+e.port),i+=e.pathname+\"/console\",$(function(){$.get(e.href,function(t){c(t,!0),r()},\"text\"),$(\"#term\").click(function(){$(\"#input\").focus()}),$(\"body\").click(function(){$(\"#input\").focus()})})}();var inputHistory=[],historyPointer=inputHistory.length;function term_input(){var t=$(\"#input\").val();return $(\"#input\").val(\"\"),socket.send(t+\"\\r\\n\"),inputHistory.push(t),historyPointer=inputHistory.length,!1}\n"
  "//# sourceMappingURL=term.js.map\n";