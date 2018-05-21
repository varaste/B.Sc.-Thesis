(function () {
    var bsa = document.createElement('script');
    bsa.type = 'text/javascript';
    bsa.async = true;
    bsa.src = '//s3.buysellads.com/ac/bsa.js';
    (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(bsa);
})();


// below changes to be added in gfg.js in future.
// load comment button click when page scroll to it and positioned ad in mobile view.
flag = 0; jQuery(window).scroll(function () { if (jQuery('#comment').length != 0) { var hT = jQuery('#comment').offset().top, hH = jQuery('#comment').outerHeight(), wH = jQuery(window).height(), wS = jQuery(this).scrollTop(); if (wS > (hT + hH - wH - 70) && !flag) { jQuery('#comment').click(); flag = 1 } } });
/*var temp_width=jQuery(window).width();if(temp_width<468){if(jQuery('article').length>1){jQuery(jQuery('.responsiveAd')).insertAfter('article:eq(2)');jQuery('.rectangleAd').hide()}
else if(jQuery('#practiceLinkDiv').length>0){jQuery(jQuery('.responsiveAd')).insertAfter('#practiceLinkDiv');jQuery('.rectangleAd').css('width','')}else{jQuery('.responsiveAd').hide();jQuery('.rectangleAd').css('width','')}}
*/

var _gaq = _gaq || [];
_gaq.push(['_setAccount', 'UA-12148232-1']);
_gaq.push(['_trackPageview']);

(function () {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
})();


 (function () {
                            if (typeof _bsa !== 'undefined' && _bsa) {
                                _bsa.init('fancybar', 'C6ADVKE', 'placement:geeksforgeeks');
                            }
                        })();