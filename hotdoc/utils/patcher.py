# -*- coding: utf-8 -*-
#
# Copyright © 2015,2016 Mathieu Duponchelle <mathieu.duponchelle@opencreed.com>
# Copyright © 2015,2016 Collabora Ltd
#
# This library is free software; you can redistribute it and/or modify it under
# the terms of the GNU Lesser General Public License as published by the Free
# Software Foundation; either version 2.1 of the License, or (at your option)
# any later version.
#
# This library is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
# FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
# details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this library.  If not, see <http://www.gnu.org/licenses/>.

"""
Banana banana
"""
import codecs
import commands


# pylint: disable=too-few-public-methods
class Patcher(object):
    """
    Banana banana
    """
    # pylint: disable=no-self-use
    def patch(self, filename, begin, end, new_comment):
        """
        Banana banana
        """
        file_encoding = commands.getoutput('file -b --mime-encoding %s' %
                                           filename)
        with codecs.open(filename, 'r', file_encoding) as _:
            lines = _.readlines()

        res = lines[0:begin] + [new_comment + '\n'] + lines[end:]
        res = ''.join(res)
        with codecs.open(filename, 'w', file_encoding) as _:
            _.write(res)
