Drupal.locale = { 'pluralFormula': function ($n) { return Number((((($n%10)==1)&&(($n%100)!=11))?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))); }, 'strings': {"":{"Also allow !name role to !permission?":"\u0422\u0430\u043a\u0436\u0435 \u043f\u0440\u0438\u0441\u0432\u043e\u0438\u0442\u044c \u0440\u043e\u043b\u0438 !name \u043f\u0440\u0430\u0432\u0430 !permission?","From @title":"\u041e\u0442 @title","Changes to the checkout panes will not be saved until the \u003Cem\u003ESave configuration\u003C\/em\u003E button is clicked.":"\u0418\u0437\u043c\u0435\u043d\u0435\u043d\u0438\u044f \u0432 \u043f\u0430\u043d\u0435\u043b\u044f\u0445 \u0437\u0430\u043a\u0430\u0437\u0430 \u043d\u0435 \u0431\u0443\u0434\u0443\u0442 \u0441\u043e\u0445\u0440\u0430\u043d\u0435\u043d\u044b \u043f\u043e\u043a\u0430 \u043d\u0435 \u0431\u0443\u0434\u0435\u0442 \u043d\u0430\u0436\u0430\u0442\u0430 \u043a\u043d\u043e\u043f\u043a\u0430 \u003Cem\u003E\u0421\u043e\u0445\u0440\u0430\u043d\u0438\u0442\u044c \u043a\u043e\u043d\u0444\u0438\u0433\u0443\u0440\u0430\u0446\u0438\u044e\u003C\/em\u003E.","To @title":"\u041a @title","Owned by @name":"\u041f\u0440\u0438\u043d\u0430\u0434\u043b\u0435\u0436\u0438\u0442 @name","Created @date":"\u0421\u043e\u0437\u0434\u0430\u043d @date","New order":"\u041d\u043e\u0432\u044b\u0439 \u0437\u0430\u043a\u0430\u0437","Updated @date":"\u041e\u0431\u043d\u043e\u0432\u043b\u0435\u043d @date","No nodes in this queue.":"\u041d\u0435\u0442 \u043c\u0430\u0442\u0435\u0440\u0438\u0430\u043b\u043e\u0432 \u0432 \u044d\u0442\u043e\u043c \u0441\u043f\u0438\u0441\u043a\u0435"}} };