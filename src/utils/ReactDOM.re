/*
 * vim: set ft=rust:
 * vim: set ft=reason:

 Note that this file *must* be named reactDOM.re or
 ReactDOM.re so that the Reason module has the correct captialization
 */
external render : React.reactElement => Document.element => unit = "" [@@bs.val] [@@bs.module
                                                                    "react-dom"
                                                                    ];

external unmountComponentAtNode : Document.element => unit = "" [@@bs.val] [@@bs.module
                                                                    "react-dom"
                                                                    ];
