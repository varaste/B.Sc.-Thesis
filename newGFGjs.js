
$(document).ready(function(){
   $('button').click(function(){
       $('.sidebar').toggleClass('fliph');
   });
   
});



// (function () {
//     var bsa = document.createElement('script');
//     bsa.type = 'text/javascript';
//     bsa.async = true;
//     bsa.src = '//s3.buysellads.com/ac/bsa.js';
//     (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(bsa);
// })();


// // below changes to be added in gfg.js in future.
// // load comment button click when page scroll to it and positioned ad in mobile view.
// flag = 0; jQuery(window).scroll(function () { if (jQuery('#comment').length != 0) { var hT = jQuery('#comment').offset().top, hH = jQuery('#comment').outerHeight(), wH = jQuery(window).height(), wS = jQuery(this).scrollTop(); if (wS > (hT + hH - wH - 70) && !flag) { jQuery('#comment').click(); flag = 1 } } });
// /*var temp_width=jQuery(window).width();if(temp_width<468){if(jQuery('article').length>1){jQuery(jQuery('.responsiveAd')).insertAfter('article:eq(2)');jQuery('.rectangleAd').hide()}
// else if(jQuery('#practiceLinkDiv').length>0){jQuery(jQuery('.responsiveAd')).insertAfter('#practiceLinkDiv');jQuery('.rectangleAd').css('width','')}else{jQuery('.responsiveAd').hide();jQuery('.rectangleAd').css('width','')}}
// */

// var _gaq = _gaq || [];
// _gaq.push(['_setAccount', 'UA-12148232-1']);
// _gaq.push(['_trackPageview']);

// (function () {
//     var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
//     ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
//     var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
// })();


// (function () {
//     if (typeof _bsa !== 'undefined' && _bsa) {
//         _bsa.init('fancybar', 'C6ADVKE', 'placement:geeksforgeeks');
//     }
// })();


// window._wpemojiSettings = {
//     "baseUrl": "https:\/\/s.w.org\/images\/core\/emoji\/2\/72x72\/",
//     "ext": ".png", "svgUrl": "https:\/\/s.w.org\/images\/core\/emoji\/2\/svg\/", "svgExt": ".svg",
//     "source": {}
// };
// !function (a, b, c) {
//     function d(a) {
//         var c, d, e, f, g, h = b.createElement("canvas"),
//             i = h.getContext && h.getContext("2d"), j = String.fromCharCode;
//         if (!i || !i.fillText) return !1; switch (i.textBaseline = "top", i.font = "600 32px Arial", a) {
//             case "flag": return i.fillText(j(55356, 56806, 55356, 56826), 0, 0), !(h.toDataURL().length < 3e3) &&
//                 (i.clearRect(0, 0, h.width, h.height), i.fillText(j(55356, 57331, 65039, 8205, 55356, 57096), 0, 0),
//                     c = h.toDataURL(), i.clearRect(0, 0, h.width, h.height), i.fillText(j(55356, 57331, 55356, 57096), 0, 0),
//                     d = h.toDataURL(),
//                     c !== d); case "diversity": return i.fillText(j(55356, 57221), 0, 0), e = i.getImageData(16, 16, 1, 1).data,
//                         f = e[0] + "," + e[1] + "," + e[2] + "," + e[3], i.fillText(j(55356, 57221, 55356, 57343), 0, 0),
//                         e = i.getImageData(16, 16, 1, 1).data, g = e[0] + "," + e[1] + "," + e[2] + "," + e[3], f !== g;
//             case "simple": return i.fillText(j(55357, 56835), 0, 0), 0 !== i.getImageData(16, 16, 1, 1).data[0];
//             case "unicode8": return i.fillText(j(55356, 57135), 0, 0), 0 !== i.getImageData(16, 16, 1, 1).data[0];
//             case "unicode9": return i.fillText(j(55358, 56631), 0, 0), 0 !== i.getImageData(16, 16, 1, 1).data[0]
//         }return !1
//     } function e(a) {
//         var c = b.createElement("script"); c.src = a, c.type = "text/javascript",
//             b.getElementsByTagName("head")[0].appendChild(c)
//     } var f, g, h,
//         i; for (i = Array("simple", "flag", "unicode8", "diversity", "unicode9"),
//             c.supports = { everything: !0, everythingExceptFlag: !0 },
//             h = 0; h < i.length; h++)c.supports[i[h]] = d(i[h]),
//                 c.supports.everything = c.supports.everything && c.supports[i[h]],
//                 "flag" !== i[h] && (c.supports.everythingExceptFlag = c.supports.everythingExceptFlag && c.supports[i[h]]);
//     c.supports.everythingExceptFlag = c.supports.everythingExceptFlag && !c.supports.flag, c.DOMReady = !1,
//         c.readyCallback = function () { c.DOMReady = !0 }, c.supports.everything || (g = function ()
//         { c.readyCallback() }, b.addEventListener ? (b.addEventListener("DOMContentLoaded", g, !1),
//             a.addEventListener("load", g, !1)) : (a.attachEvent("onload", g),
//                 b.attachEvent("onreadystatechange", function () { "complete" === b.readyState && c.readyCallback() })),
//             f = c.source || {}, f.concatemoji ? e(f.concatemoji) : f.wpemoji && f.twemoji && (e(f.twemoji),
//                 e(f.wpemoji)))
// }(window, document, window._wpemojiSettings);

// var arrPostCat = new Array();
//         arrPostCat.push('3');
//         arrPostCat.push('1751');
//         arrPostCat.push('1752');
//         var domain = 1;
//         var arrPost = new Array();
//         var post_id = "0";
//         var post_type = "post";
//         var post_slug = window.location.href;
//         var ip = "52.56.127.19";
//         var post_title = "Replacing an element makes array elements consecutive";
//         var post_status = "publish";
//         var isAdminLoggedIn = 0;

//           function myAccFunc() {
//             var x = document.getElementById("demoAcc");
//             if (x.className.indexOf("w3-show") == -1) {
//                 x.className += " w3-show";
//                 x.previousElementSibling.className += " w3-green";
//             } else {
//                 x.className = x.className.replace(" w3-show", "");
//                 x.previousElementSibling.className =
//                     x.previousElementSibling.className.replace(" w3-green", "");
//             }
//         }
//         function myDropFunc() {
//             var x = document.getElementById("demoDrop");
//             if (x.className.indexOf("w3-show") == -1) {
//                 x.className += " w3-show";
//                 x.previousElementSibling.className += " w3-green";
//             } else {
//                 x.className = x.className.replace(" w3-show", "");
//                 x.previousElementSibling.className =
//                     x.previousElementSibling.className.replace(" w3-green", "");
//             }
//         }

//          <script type='text/javascript' src='https://www.geeksforgeeks.org/wp-includes/js/jquery/jquery.js'></script>
//     <script type='text/javascript' src='https://www.geeksforgeeks.org/wp-includes/js/jquery/jquery-migrate.min.js'></script>
//     <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
//     <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.4/js/bootstrap.min.js"></script>
//     <script type='text/javascript' src='https://www.geeksforgeeks.org/wp-content/themes/iconic-one/js/gfg-7.1.js'></script>
//     <style type="text/css" id="syntaxhighlighteranchor"></style>
//     <script href="E:\Persian-literature-Demo\newGFGjs.js"></script>
//     <script src="E:\Persian-literature-Demo\newGFGjs.js"></script>








